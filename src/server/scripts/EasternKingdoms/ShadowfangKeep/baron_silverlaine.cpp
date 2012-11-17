#include "ScriptPCH.h"
#include "shadowfang_keep.h"

enum eSpells {
    SPELL_VEIL_OF_SHADOW                = 93581,
};

enum eSpirits {
    NPC_ODO_THE_BLINDWATCHER            = 50857,
    NPC_RAZORCLAW_THE_BUTCHER           = 50869,
    NPC_RETHILGORE                      = 50834,
    NPC_WORLF_MASTER_NANDOS             = 50851
};

class boss_baron_silverlaine : public CreatureScript
{
public:
    boss_baron_silverlaine() : CreatureScript("boss_baron_silverlaine") { }

    CreatureAI* GetAI(Creature* creature) const
    {
        return new boss_baron_silverlaineAI (creature);
    }

    struct boss_baron_silverlaineAI : public ScriptedAI
    {
        boss_baron_silverlaineAI(Creature* creature) : ScriptedAI(creature)
        {
            pInstance = creature->GetInstanceScript();
            me->ApplySpellImmune(0, IMMUNITY_EFFECT, SPELL_EFFECT_KNOCK_BACK,true);
            me->ApplySpellImmune(0, IMMUNITY_ID, 49560, true);
        }

        InstanceScript* pInstance;
        float WorgenSpiritSpawnCheck;
        
        void Reset() 
        {
            WorgenSpiritSpawnCheck = IsHeroic() ? 90.0f : 70.0f;
        }

        void EnterCombat(Unit* /*pWho*/) {}

        void JustDied(Unit* /*Killer*/) {}

        void UpdateAI(const uint32 Diff)
        {
            if (!UpdateVictim())
                return;
            
            if (me->GetHealthPct() < WorgenSpiritSpawnCheck && me->GetHealthPct() != 0.0f)
            {
                Creature* WorgenSpirit;
                
                switch (urand(1,4))
                {
                    case 1:
                        WorgenSpirit = me->SummonCreature(
                                NPC_ODO_THE_BLINDWATCHER,
                                me->GetPositionX(),
                                me->GetPositionY(),
                                me->GetPositionZ(),
                                0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                        break;
                        
                    case 2:
                        WorgenSpirit = me->SummonCreature(
                                NPC_RAZORCLAW_THE_BUTCHER,
                                me->GetPositionX(),
                                me->GetPositionY(),
                                me->GetPositionZ(),
                                0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                        break;
                        
                    case 3:
                        WorgenSpirit = me->SummonCreature(
                                NPC_RETHILGORE,
                                me->GetPositionX(),
                                me->GetPositionY(),
                                me->GetPositionZ(),
                                0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                        break;
                        
                    case 4:
                        WorgenSpirit = me->SummonCreature(
                                NPC_WORLF_MASTER_NANDOS,
                                me->GetPositionX(),
                                me->GetPositionY(),
                                me->GetPositionZ(),
                                0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                        break;
                }
                
                if (Unit* target = SelectTarget(SELECT_TARGET_RANDOM, 0, 150, false))
                {
                    if (WorgenSpirit)
                        WorgenSpirit->Attack(target, true);
                }
                
                if (IsHeroic())
                {
                    WorgenSpiritSpawnCheck -= 30.0f;
                }
                else
                {
                    WorgenSpiritSpawnCheck -= 35.0f;
                }
            }
            
            DoMeleeAttackIfReady();
        }
    };
};

void AddSC_boss_baron_silverlaine() 
{
    new boss_baron_silverlaine();
}
