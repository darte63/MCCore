-- SmartAI für Arena Quest im Schattenhochland

DELETE FROM `creature` WHERE  `guid`=15803755 LIMIT 1;

-- Strunz'blunz SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46944 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46944, 4000, 4000, 4000, 4000, 11, 33239, 4, 'Strunz\'blunz - Wirbelwind');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46944, 1, 7000, 7000, 7000, 7000, 11, 83016, 5, 'Strunz\'blunz - Wirbelwind 2');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46944, 2, 8000, 8000, 8000, 8000, 11, 91933, 5, 'Strunz\'blunz - Einschüchterndes Gebrüll');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46944, 3, 10000, 10000, 10000, 10000, 11, 88482, 5, 'Strunz\'blunz - Überkopfkracher');

-- Torg Drachenschinder SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46945 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46945, 10000, 10000, 10000, 10000, 11, 88288, 5, 'Torg Drachenschinder - Sturmangriff');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46945, 1, 7000, 7000, 7000, 7000, 11, 80182, 5, 'Torg Drachenschinder - Aufwärtshaken');

-- Sully Kniescheibler SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46946 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46946, 10000, 10000, 10000, 10000, 11, 88288, 5, 'Sully Kniescheibler - Sturmangriff');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46946, 1, 7000, 7000, 7000, 7000, 11, 80182, 5, 'Sully Kniescheibler - Aufwärtshaken');

--Kadavercollage <Geschöpf von Calder> SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46947 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46947, 6000, 6000, 6000, 6000, 11, 88607, 5, 'Kadavercollage - Rülpser');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46947, 1, 11000, 11000, 11000, 11000, 11, 88605, 5, 'Kadavercollage - Abstoßendes Starren');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46947, 2, 15000, 15000, 15000, 15000, 11, 88614, 5, 'Kadavercollage - Seuchenexplosion');

-- Lord Geoffery Tulvan SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46948 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46948, 6000, 6000, 6000, 6000, 11, 80182, 5, 'Lord Geoffery Tulvan - Aufwärtshaken');
INSERT INTO `smart_scripts` (`entryorguid`, `id`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`, `comment`) VALUES (46948, 1, 11000, 11000, 11000, 11000, 11, 88616, 5, 'Lord Geoffery Tulvan - Unsterbliche Raseirei');

-- Glutnarbe der Verschlinger <Champion des Schattenhammers> SAI
UPDATE `creature_template` SET `AIName`='SmartAI' WHERE  `entry`=46949 LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action_type`, `action_param1`, `target_type`) VALUES (46949, 6000, 6000, 6000, 6000, 11, 90446, 5);
UPDATE `smart_scripts` SET `comment`='Glutnarbe der Verschlinger <Champion des Schattenhammers> - Feuerball' WHERE  `entryorguid`=46949 AND `source_type`=0 AND `id`=0 AND `link`=0 LIMIT 1;