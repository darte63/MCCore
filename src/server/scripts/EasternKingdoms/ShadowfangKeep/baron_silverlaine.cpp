#include "ScriptPCH.h"
#include "shadowfang_keep.h"

enum eSpells {
    SPELL_VEIL_OF_SHADOW            = 93581,
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
        
        
        void Reset() {}

        void EnterCombat(Unit* /*pWho*/) {}

        void JustDied(Unit* /*Killer*/) {}

        void UpdateAI(const uint32 Diff)
        {
            if (!UpdateVictim())
                return;
            
            DoMeleeAttackIfReady();
        }
    };
};

void AddSC_boss_baron_silverlaine() 
{
    new boss_baron_silverlaine();
}
