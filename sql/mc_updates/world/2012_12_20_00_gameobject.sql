-- Fixe Portalspawn in OG 
DELETE FROM `gameobject` WHERE  `guid`=163644 LIMIT 1;
DELETE FROM `gameobject` WHERE  `guid`=218967 LIMIT 1;
INSERT INTO `gameobject` (`guid`, `id`, `map`, `spawnMask`, `phaseMask`, `position_x`, `position_y`, `position_z`, `orientation`, `rotation0`, `rotation1`, `rotation2`, `rotation3`, `spawntimesecs`, `animprogress`, `state`) VALUES (4028866, 206616, 1, 1, 1, 2023.15, -4334.98, 95.1246, 4.46078, 0, 0, 0.790241, -0.612796, 300, 0, 1);
