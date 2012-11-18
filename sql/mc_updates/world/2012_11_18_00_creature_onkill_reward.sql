-- Fixe Dropchance der Gerechtigkeitspunkten
-- Vortexgipfel
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43873, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43878, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43879, 395, 14000); -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43874, 395, 14000); -- Heroic

-- Der steinerne Kern
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43438, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43214, 395, 7000);
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=7000 WHERE  `creature_id`=42188 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=7000 WHERE  `creature_id`=42333 LIMIT 1;

INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49642, 395, 14000); -- Herioc
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49538, 395, 14000); -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=49654 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=49624 LIMIT 1; -- Heroic

-- Die verlorene Stadt
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (44577, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43612, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (43614, 395, 3500);
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=3500 WHERE  `creature_id`=49045 LIMIT 1;
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (44819, 395, 7000);

UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48932 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48951 LIMIT 1; -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49043, 395, 7000); -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=51088 LIMIT 1; -- Heroic

-- Grim Batol
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39625, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (40177, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (40319, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (40484, 395, 7000);

REPLACE INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48337, 395, 14000); -- Heroic
REPLACE INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48702, 395, 14000); -- Heroic
REPLACE INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48784, 395, 14000); -- Heroic
REPLACE INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48822, 395, 14000); -- Heroic

-- Schwarzfelshöhlen
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39665, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39679, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39698, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39700, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39705, 395, 7000);

INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39666, 395, 14000); -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39680, 395, 14000); -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39699, 395, 14000); -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39701, 395, 14000); -- Heroic
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39706, 395, 14000); -- Heroic

-- Throne der Gezeiten
-- HEROIC FEHLT !
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=7000 WHERE  `creature_id`=40586 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=7000 WHERE  `creature_id`=40765 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=7000 WHERE  `creature_id`=40825 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=3000 WHERE  `creature_id`=40825 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=3000 WHERE  `creature_id`=40788 LIMIT 1;
UPDATE `creature_onkill_reward` SET `CurrencyId1`=395, `CurrencyCount1`=7000 WHERE  `creature_id`=42172 LIMIT 1;

-- Hallen des Ursprungs
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39425, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39428, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39788, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39587, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39731, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39732, 395, 7000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (39378, 395, 7000);

UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=49262 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48714 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48902 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48710 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48715 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48776 LIMIT 1; -- Heroic
UPDATE `creature_onkill_reward` SET `CurrencyCount1`=14000 WHERE  `creature_id`=48815 LIMIT 1; -- Heroic

-- Burg Schattenfang HEROIC
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49708, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49709, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49710, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49711, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49712, 395, 14000);

-- Todesminen HEROIC
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48936, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48940, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48941, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48943, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (48944, 395, 14000);
INSERT INTO `creature_onkill_reward` (`creature_id`, `CurrencyId1`, `CurrencyCount1`) VALUES (49541, 395, 14000);

