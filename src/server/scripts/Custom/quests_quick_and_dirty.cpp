#include "ScriptPCH.h"

class quest_25385: public CreatureScript
{
public:
    quest_25385 () :
            CreatureScript("quest_25385")
    {
    }

    bool OnGossipHello (Player *player, Creature *creature)
    {
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Tierchen retten", GOSSIP_SENDER_MAIN, 1000);
        player->SEND_GOSSIP_MENU(907, creature->GetGUID());
        return true;
    }

    bool OnGossipSelect (Player* player, Creature* creature, uint32, uint32 action)
    {
        player->PlayerTalkClass->ClearMenus();
        
        if (action == 1000)
        {
            creature->ToPlayer()->KilledMonsterCredit(110100, 0);
            creature->DisappearAndDie();
        }
        
        return true;
    }
};

void quests_quick_and_dirty()
{
    new quest_25385;
}
