#include "ScriptPCH.h"
#include "shadowfang_keep.h"

class boss_commander_springvale : public CreatureScript
{
public:
    boss_commander_springvale() : CreatureScript("boss_commander_springvale") { }

    CreatureAI* GetAI(Creature* creature) const
    {
        return new boss_commander_springvaleAI (creature);
    }

    struct boss_commander_springvaleAI : public ScriptedAI
    {
        boss_commander_springvaleAI(Creature* creature) : ScriptedAI(creature)
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
                return
                    
            DoMeleeAttackIfReady();
        }
    };
};

void AddSC_boss_commander_springvale() 
{
    new boss_commander_springvale();
}
