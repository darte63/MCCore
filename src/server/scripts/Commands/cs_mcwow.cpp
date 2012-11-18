#include "ScriptPCH.h"
#include "Chat.h"

class mcwow_commandscript: public CommandScript
{
public:
    mcwow_commandscript () :
            CommandScript("mcwow_commandscript")
    {
    }

    static bool HandleBugQuestCommand (ChatHandler* handler, const char* args)
    {
        if (!*args)
            return false;
        
        std::string content = strtok((char*)args, " ");
        CharacterDatabase.PExecute(
                "INSERT INTO bugreport (cat, content, time, char, acc) VALUES (1,'%s',UNIX_TIMESTAMP(),%u,%u)",
                 content,handler->GetSession()->GetPlayer()->GetGUID(), handler->GetSession()->GetAccountId());
        handler->PSendSysMessage("Bug wurde gemeldet!");
        
        return true;
    }
    static bool HandleBugNPCCommand (ChatHandler* handler, const char* args)
    {
        if (!*args)
            return false;
        
        std::string content = strtok((char*)args, " ");
        CharacterDatabase.PExecute(
                "INSERT INTO bugreport (cat, content, time, char, acc) VALUES (2,'%s',UNIX_TIMESTAMP(),%u,%u)",
                 content,handler->GetSession()->GetPlayer()->GetGUID(), handler->GetSession()->GetAccountId());
        handler->PSendSysMessage("Bug wurde gemeldet!");
        
        return true;
    }
    static bool HandleBugSpellCommand (ChatHandler* handler, const char* args)
    {
        if (!*args)
            return false;
        
        std::string content = strtok((char*)args, " ");
        CharacterDatabase.PExecute(
                "INSERT INTO bugreport (cat, content, time, char, acc) VALUES (3,'%s',UNIX_TIMESTAMP(),%u,%u)",
                 content,handler->GetSession()->GetPlayer()->GetGUID(), handler->GetSession()->GetAccountId());
        handler->PSendSysMessage("Bug wurde gemeldet!");
        
        return true;
    }
    static bool HandleBugItemCommand (ChatHandler* handler, const char* args)
    {
        if (!*args)
            return false;
        
        std::string content = strtok((char*)args, " ");
        CharacterDatabase.PExecute(
                "INSERT INTO bugreport (cat, content, time, char, acc) VALUES (4,'%s',UNIX_TIMESTAMP(),%u,%u)",
                 content,handler->GetSession()->GetPlayer()->GetGUID(), handler->GetSession()->GetAccountId());
        handler->PSendSysMessage("Bug wurde gemeldet!");
        
        return true;
    }
    static bool HandleBugBerufCommand (ChatHandler* handler, const char* args)
    {
        if (!*args)
            return false;
        
        std::string content = strtok((char*)args, " ");
        CharacterDatabase.PExecute(
                "INSERT INTO bugreport (cat, content, time, char, acc) VALUES (5,'%s',UNIX_TIMESTAMP(),%u,%u)",
                 content,handler->GetSession()->GetPlayer()->GetGUID(), handler->GetSession()->GetAccountId());
        handler->PSendSysMessage("Bug wurde gemeldet!");
        
        return true;
    }

    ChatCommand* GetCommands () const
    {
        static ChatCommand bugtrackercommands[] = 
        {
            { "quest", SEC_PLAYER, false, &HandleBugQuestCommand, "", NULL },
            { "npc", SEC_PLAYER, false, &HandleBugNPCCommand, "", NULL },
            { "spell", SEC_PLAYER, false, &HandleBugSpellCommand, "", NULL },
            { "item", SEC_PLAYER, false, &HandleBugItemCommand, "", NULL },
            { "beruf", SEC_PLAYER, false, &HandleBugBerufCommand, "", NULL },
            { NULL, 0, false, NULL, "", NULL } 
        };

        static ChatCommand commandTable[] = 
        {
            { "bugreport", SEC_PLAYER, false, NULL, "", bugtrackercommands },
            { NULL, 0, false, NULL, "", NULL }
        };

        return commandTable;
    }
};

void AddSC_mcwow_commandscript()
{
    new mcwow_commandscript();
}

