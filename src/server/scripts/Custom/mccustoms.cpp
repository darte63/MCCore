#include "ScriptPCH.h"

class level_helper: public CreatureScript
{
public:
    level_helper () :
            CreatureScript("level_helper")
    {
    }

    void skipStartArea(Player* plr) 
    {
        if (plr->getClass() != 6)
        switch (plr->getRace())
        {
            case 9:
                plr->learnSpell(69046,false);  //Packhobgoblin
                if (plr->getClass() == 11)
                    plr->TeleportTo(1, 10311.2f, 831.16f, 1326.4f, 5.69f, 0);
                else
                    plr->TeleportTo(0, -8914.7f, -134.16f, 80.6f, 5.2f, 0);
                break;
                
            case 22:
                plr->learnSpell(68996,false);  //Two Forms
                plr->learnSpell(87840,false);  //Running Wild
                if (plr->getClass() == 11)
                    plr->TeleportTo(1, 10311.2f, 831.16f, 1326.4f, 5.69f, 0);
                else
                    plr->TeleportTo(0, -8914.7f, -134.16f, 80.6f, 5.2f, 0);
                break;
        }
        else
        {
            plr->AddItem(38674, 1);
            plr->AddItem(38667, 1);
            plr->AddItem(38663, 1);
            plr->AddItem(38662, 1);
            plr->AddItem(40483, 1);
            plr->AddItem(39322, 1);
            plr->AddItem(39208, 1);
            plr->AddItem(38671, 1);
            plr->AddItem(38666, 1);
            plr->AddItem(38669, 1);
            plr->AddItem(38675, 1);
            plr->AddItem(38670, 1);
            plr->AddItem(38672, 1);
            plr->AddItem(38632, 1);
            plr->AddItem(38665, 1);
            plr->AddItem(38661, 1);
            plr->learnSpell(50977,false);    //Dark Portal
            plr->learnSpell(53428,false);    //Rune Smith
            plr->learnSpell(48778,false);    //DK Mount 
            plr->SetFreeTalentPoints(24);
            plr->SendTalentsInfoData(true);
            plr->TeleportTo(530, -246.695f, 962.65f, 84.34f, 1.6f, 0);
        }
    }
    
    bool OnGossipHello (Player *player, Creature *creature)
    {
        if (player->getLevel() < 56)
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Startgebiet wegen Bugs auslassen", GOSSIP_SENDER_MAIN, 1000);
        else
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Du bist nicht berechtigt diese Option zu verwenden.", GOSSIP_SENDER_MAIN, 1);
        player->SEND_GOSSIP_MENU(907, creature->GetGUID());
        return true;
    }

    bool OnGossipSelect (Player* player, Creature* creature, uint32, uint32 action)
    {
        player->PlayerTalkClass->ClearMenus();
        
        if (action == 1000)
            skipStartArea(player);
        
        return true;
    }
};

void AddSC_mccustoms()
{
    new level_helper;
}

