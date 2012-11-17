#include "ScriptPCH.h"
#include "shadowfang_keep.h"

enum eSpells {
    SPELL_PAIN_AND_SUFFERING            = 93581,
    SPELL_PAIN_AND_SUFFERING_H          = 93581,
    SPELL_ASPHYXIATE                    = 93423,
    SPELL_ASPHYXIATE_H                  = 93423,
    SPELL_STAY_OF_EXECUTION             = 93468,
    SPELL_STAY_OF_EXECUTION_H           = 93468,
    SPELL_DARK_ARCHANGEL_FORM           = 93757,
    SPELL_CALAMITY                      = 93810
};

enum eAuras {
    AURA_DARK_ARCHANGEL_FORM_VISUAL     = 93766
};

class boss_baron_ashbury : public CreatureScript
{
public:
    boss_baron_ashbury() : CreatureScript("boss_baron_ashbury") { }

    CreatureAI* GetAI(Creature* creature) const
    {
        return new boss_baron_ashburyAI (creature);
    }

    struct boss_baron_ashburyAI : public ScriptedAI
    {
        boss_baron_ashburyAI(Creature* creature) : ScriptedAI(creature)
        {
            pInstance = creature->GetInstanceScript();
            me->ApplySpellImmune(0, IMMUNITY_EFFECT, SPELL_EFFECT_KNOCK_BACK,true);
            me->ApplySpellImmune(0, IMMUNITY_ID, 49560, true);
        }

        InstanceScript* pInstance;
        uint32 uiPainAndSufferingTimer;
        uint32 uiAsphyxiateTimer;
        uint32 uiStayOfExecutionTimer;
        uint32 uiCalamityTimer;
        uint32 phase;
        
        void Reset()
        {
            uiPainAndSufferingTimer = 10*IN_MILLISECONDS;
            uiAsphyxiateTimer = 45*IN_MILLISECONDS;
            uiStayOfExecutionTimer = 57*IN_MILLISECONDS;
            uiCalamityTimer = 8*IN_MILLISECONDS;
            phase = 1;
        }

        void EnterCombat(Unit* /*pWho*/) {}

        void JustDied(Unit* /*Killer*/) {}

        void UpdateAI(const uint32 Diff)
        {
            if (!UpdateVictim())
                return;
            
            if (phase == 1)
            {
                if (uiPainAndSufferingTimer <= Diff)
                {
                    if (Unit* target = SelectTarget(SELECT_TARGET_RANDOM, 0, 150, false))
                        me->CastSpell(target, DUNGEON_MODE(SPELL_PAIN_AND_SUFFERING, SPELL_PAIN_AND_SUFFERING_H), true);

                    uiPainAndSufferingTimer = urand(10*IN_MILLISECONDS, 20*IN_MILLISECONDS); 
                } else uiPainAndSufferingTimer -= Diff;

                if (uiAsphyxiateTimer <= Diff)
                {
                    if (Unit* target = SelectTarget(SELECT_TARGET_RANDOM, 0, 150, true))
                        me->CastSpell(target, DUNGEON_MODE(SPELL_ASPHYXIATE, SPELL_ASPHYXIATE_H), false);

                    uiAsphyxiateTimer = 45*IN_MILLISECONDS; 
                    uiPainAndSufferingTimer = 13*IN_MILLISECONDS; 
                } else uiAsphyxiateTimer -= Diff;

                if (uiStayOfExecutionTimer <= Diff)
                {
                    DoCast(me, DUNGEON_MODE(SPELL_STAY_OF_EXECUTION,SPELL_STAY_OF_EXECUTION_H));
                    uiStayOfExecutionTimer = 45*IN_MILLISECONDS;
                    uiPainAndSufferingTimer = 10*IN_MILLISECONDS; 
                } else uiStayOfExecutionTimer -= Diff;
                
                if (phase == 1 && me->GetHealthPct() <= 25.0f && IsHeroic())
                {
                    me->ApplySpellImmune(0, IMMUNITY_EFFECT, SPELL_EFFECT_INTERRUPT_CAST, true);
                    DoCast(me, SPELL_DARK_ARCHANGEL_FORM);
                }
                
                if (me->HasAura(SPELL_DARK_ARCHANGEL_FORM) && IsHeroic())
                {
                    phase = 2;
                    me->AddAura(AURA_DARK_ARCHANGEL_FORM_VISUAL, me);
                }      
            }
            
            if (phase == 2 && IsHeroic())
            {
                if (uiCalamityTimer <= Diff)
                {
                    DoCast(me, SPELL_CALAMITY);
                    uiCalamityTimer = 500; 
                } else uiCalamityTimer -= Diff;
            }

            DoMeleeAttackIfReady();
        }
    };
};

void AddSC_boss_baron_ashbury() 
{
    new boss_baron_ashbury();
}
