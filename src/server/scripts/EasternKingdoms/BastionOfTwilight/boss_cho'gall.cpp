/*
 * Copyright (C) 2005 - 2011 MaNGOS <http://www.getmangos.org/>
 *
 * Copyright (C) 2008 - 2011 TrinityCore <http://www.trinitycore.org/>
 *
 * Copyright (C) 2011 - 2012 ArkCORE <http://www.arkania.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include"ScriptPCH.h"
#include"bastion_of_twilight.h"

enum eSpells {
    SPELL_FURY_OF_CHOGALL = 82524,
    SPELL_FLAMES_ORDERS = 81171,
    SPELL_SHADOWS_ORDERS = 81556
};

enum eNPCs {
    NPC_SHADOW_PORTAL = 43603,
    NPC_FIRE_PORTAL = 43393,
    NPC_FIRE_ELEMENTAR = 43406,
    NPC_SHADOW_BIEST = 43592
};

class boss_chogall : public CreatureScript {
public:

    boss_chogall() :
    CreatureScript("boss_chogall") {
    }

    CreatureAI* GetAI(Creature* creature) const {
        return new boss_chogallAI(creature);
    }

    struct boss_chogallAI : public ScriptedAI {

        boss_chogallAI(Creature * creature) :
        ScriptedAI(creature) {
            pInstance = creature->GetInstanceScript();
        }

        InstanceScript* pInstance;
        Creature *firePortal;
        Creature *shadowPortal;
        uint32 uiFuryOfChogallTimer;
        uint32 uiPortalSpawnTimer;
        uint32 uiPortalTimer;
        uint32 uiAddCounter;

        void Reset() {
            uiFuryOfChogallTimer = 15 * IN_MILLISECONDS;
        }

        void EnterCombat(Unit* /*pWho*/) {
        }

        void UpdateAI(const uint32 Diff) {
            if (!UpdateVictim())
                return;


            //Fury of Chogall
            if (uiFuryOfChogallTimer <= Diff) {
                if (Unit * target = SelectTarget(SELECT_TARGET_TOPAGGRO, 0, 150, false))
                    me->CastSpell(target, SPELL_FURY_OF_CHOGALL, true);
                uiFuryOfChogallTimer = urand(10 * IN_MILLISECONDS, 20 * IN_MILLISECONDS);
            } else uiFuryOfChogallTimer -= Diff;
            
            if (uiPortalSpawnTimer <= Diff) {
                Creature* fireElemental =
                        me->SummonCreature(NPC_FIRE_ELEMENTAR,
                        me->GetPositionX(), me->GetPositionY(), me->GetPositionZ(), 0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                if (Unit * target = SelectTarget(SELECT_TARGET_RANDOM, 0, 150, false))
                        fireElemental->Attack(target, true);

                Creature* shadowBiest =
                        me->SummonCreature(NPC_SHADOW_BIEST,
                        me->GetPositionX(), me->GetPositionY(), me->GetPositionZ(), 0, TEMPSUMMON_TIMED_DESPAWN, 120000);
                if (Unit * target = SelectTarget(SELECT_TARGET_RANDOM, 0, 150, false))
                        shadowBiest->Attack(target, true);
                
                uiAddCounter++;
                
                if (uiAddCounter < 3)
                    uiPortalSpawnTimer = 5 * IN_MILLISECONDS;
                else
                    uiPortalSpawnTimer = 90 * IN_MILLISECONDS;
            }
            DoMeleeAttackIfReady();
        }
    };
};

void AddSC_boss_chogall() {
    new boss_chogall();
}
