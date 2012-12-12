-- Fixe Portalspawn in OG (Schattenhochland)
DELETE FROM `gameobject` WHERE  `guid`=50012 LIMIT 1;
DELETE FROM `gameobject` WHERE  `guid`=4017958 LIMIT 1;
DELETE FROM `gameobject` WHERE  `guid`=4026625 LIMIT 1;
DELETE FROM `gameobject` WHERE  `guid`=4026658 LIMIT 1;
DELETE FROM `gameobject` WHERE  `guid`=4026811 LIMIT 1;
INSERT INTO `gameobject` (`guid`, `id`, `map`, `spawnMask`, `phaseMask`, `position_x`, `position_y`, `position_z`, `orientation`, `rotation0`, `rotation1`, `rotation2`, `rotation3`, `spawntimesecs`, `animprogress`, `state`) VALUES (4028833, 207686, 1, 1, 1, 2028.88, -4379.66, 98.0541, 6.15895, 0, 0, 0.0620792, -0.998071, 300, 0, 1);