-- Fixe Quest Schlächterbot
UPDATE `quest_template` SET `ReqCreatureOrGOId1`=5419, `ReqSpellCast1`=74175 WHERE  `entry`=25112 LIMIT 1;
-- Fixe Quest Wiederverwerter zur Wiederverwertung
UPDATE `quest_template` SET `ReqCreatureOrGOId1`=5429, `ReqSpellCast1`=74175 WHERE  `entry`=25111 LIMIT 1;
-- Fixe Quest Eiterpfotenschlachtung
UPDATE `quest_template` SET `ReqCreatureOrGOId1`=5426, `ReqSpellCast1`=74175 WHERE  `entry`=25115 LIMIT 1;

