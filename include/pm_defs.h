#pragma once

#define PM_REGISTER_HIGHCURRENTLIMIT    0x21 // read / write high current cut off register
#define PM_REGISTER_HIGHTEMPLIMIT       0x22 // read / write high temperature cut off register
#define PM_REGISTER_LOWTEMPLIMIT        0x23 // read / write low temperature cut off register
#define PM_REGISTER_HIGHVOLTLIMIT       0x24 // read / write high voltage cut off register
#define PM_REGISTER_LOWVOLTLIMIT        0x25 // read / writte low voltage cut off register
#define PM_REGISTER_CONFIG0BYTE         0x26 // read / write concig0 register
#define PM_REGISTER_CONFIG1BYTE         0x27 // read / write config1 register
#define PM_REGISTER_CONFIG2BYTE         0x28 // read / write config2 register
#define PM_REGISTER_CURRENTMVA          0x29 // read / write current sensor mva value in millivolts
#define PM_REGISTER_VPACKDIVISOR        0X2A // read / write pack voltage sense divisor
#define PM_REGISTER_VBUSDIVISOR         0x2B // read / write bus voltage sense divisor
#define PM_REGISTER_STATUS0BYTE         0x2C // read status0 register byte
#define PM_REGISTER_STATUS1BYTE         0x2D // read status1 register byte
#define PM_REGISTER_THERMDIVISOR        0x2E // read / write thermistor scaling factor
#define PM_REGISTER_CLEARCOLCNTR        0x30 // clear coulomb counter
#define PM_REGISTER_CLEARAMPSCNTRS      0x31 // clear amperage counters
#define PM_REGISTER_READCOLCNTR         0x32 // read coulomb counter
#define PM_REGISTER_READLOADAMPS        0x33 // display current load amperage
#define PM_REGISTER_TOTALAMPSIN         0x34 // total amps in
#define PM_REGISTER_TOTALAMPSOUT        0x35 // total amps out
#define PM_REGISTER_LIFEAMPSIN          0x36 // display lifetime total charge amps
#define PM_REGISTER_LIFEAMPSOUT         0x37 // display lifetime total discharge amps
#define PM_REGISTER_READBUSVOLTS        0x38 // read bus voltage right now
#define PM_REGISTER_READPACKVOLTS       0x39 // read pack voltage right now
#define PM_REGISTER_READLOWVOLTS        0x3A // read low pack voltage record
#define PM_REGISTER_READHIVOLTS         0x3B // read high pack voltage record
#define PM_REGISTER_READLOADAMPSHI      0x3C // read peak load amperage
// #define PM_REGISTER_READLOADAMPSLO      0x3D // read high pack voltage record timestamp
#define PM_REGISTER_CLEARVOLTMEM        0x3E // clear voltage record memory
#define PM_REGISTER_CLEARTEMPS          0x40 // clear temperature record memory
#define PM_REGISTER_READDEGCT0          0x41 // read t0 degrees c
#define PM_REGISTER_READDEGCT1          0x42 // read t1 degrees c
#define PM_REGISTER_READDEGCT2          0x43 // read t2 degrees c
#define PM_REGISTER_READT0LOW           0x44 // read t0 low temp record
#define PM_REGISTER_READT1LOW           0x45 // read t1 low temp record
#define PM_REGISTER_READT2LOW           0x46 // read t2 low temp record
#define PM_REGISTER_READT0HIGH          0x47 // read t0 high temp record
#define PM_REGISTER_READT1HIGH          0x48 // read t1 high temp record
#define PM_REGISTER_READT2HIGH          0x49 // read t2 high temp record
// #define PM_REGISTER_READT0LOWTS         0x4A // read t0 low temp record timestamp
// #define PM_REGISTER_READT1LOWTS         0x4B // read t1 low temp record timestamp
// #define PM_REGISTER_READT2LOWTS         0x4C // read t2 low temp record timestamp
// #define PM_REGISTER_READT0HITS          0x4D // read t0 high temp record timestamp
// #define PM_REGISTER_READT1HITS          0x4E // read t1 high temp record timestamp
// #define PM_REGISTER_READT2HITS          0x4F // read t2 high temp record timestamp
#define PM_REGISTER_LASTDISCREASON      0x50 // last disconnect reason code
#define PM_REGISTER_TOTOVRCURDISC       0x51 // total over current disconnects
#define PM_REGISTER_TOTUNDRVLTDISC      0x52 // total under voltage disconnects
#define PM_REGISTER_TOTOVRVLTDISC       0x53 // total over voltage disconnects
#define PM_REGISTER_TOTLOWRTEMPDISC     0x54 // total low temp disconnects
#define PM_REGISTER_TOTHITEMPDISC       0x55 // total high temp disconnects
// #define PM_REGISTER_LASTDISCTIME        0x56 // timestatmp for last disconnect
#define PM_REGISTER_CLEARDISCHIST       0x5F // clear disconnect history
#define PM_REGISTER_SETEPOCHTIME        0x60 // set epoch time
#define PM_REGISTER_FIRSTINITTIME       0x61 // timestamp of last eeprom initilization
#define PM_REGISTER_CURRENTTIME         0x62 // read current epoch time
#define PM_REGISTER_TIMESYNC            0x63 // elapsed time since last sync
#define PM_REGISTER_UPTIME              0x64 // elapsed time since last power-on reset

#define PM_CONFIG0_DISABLEPROTS         0x07 // set to disable all protections, monitor pack only
#define PM_CONFIG0_ENAOVRCURPROT        0x06 // set to enable over-current protection
#define PM_CONFIG0_ENAOVRTMPPROT        0x05 // set to enable over-temp protection
#define PM_CONFIG0_ENAUNDTMPPROT        0x04 // set to enable under-temp protection
#define PM_CONFIG0_EMAUNDVLTPROT        0x03 // set to enable under-voltage protection
#define PM_CONFIG0_ENAOVRVLTPROT        0x02 // set to enable over-voltage protection
#define PM_CONFIG0_ENASTATUSLEDS        0x00 // set to enable status leds if present

#define PM_STATUS0_CONFIGSET            0x07 // set when config0 contains vaild configuration
#define PM_STATUS0_TIMESET              0x06 // set when system clock has been set
#define PM_STATUS0_WARNTEMP             0x05 // set when temperature within 3 degrees of either limit
#define PM_STATUS0_WARNCURRENT          0x04 // set when current within 1 amp of limit
#define PM_STATUS0_WARNVOLTAGE          0x03 // set when voltage within 0.25v of limits
#define PM_STATUS0_RANGETSNS            0x02 // set when temperature sensor value is out of range
#define PM_STATUS0_RANGEISNS            0x01 // set when current sensor value is out of range
#define PM_STATUS0_RANGEVSNS            0x00 // set when voltage sensor value is out of range

#define PM_STATUS1_RANGEVBUS            0x00 // set when bus voltage is out of normal range

/**
* The NTC table has 1024 interpolation points.
* Unit:0.01 °C
*
*/
const int NTC_table[1024] = {
  -7413, -6978, -6543, -6223, -5968, -5754, 
  -5570, -5408, -5263, -5131, -5010, -4899, 
  -4795, -4699, -4608, -4522, -4440, -4363, 
  -4289, -4219, -4152, -4087, -4025, -3965, 
  -3907, -3851, -3797, -3744, -3693, -3644, 
  -3596, -3549, -3504, -3459, -3416, -3374, 
  -3332, -3292, -3252, -3214, -3176, -3139, 
  -3102, -3067, -3032, -2997, -2964, -2930, 
  -2898, -2866, -2834, -2803, -2772, -2742, 
  -2713, -2683, -2655, -2626, -2598, -2571, 
  -2543, -2516, -2490, -2464, -2438, -2412, 
  -2387, -2362, -2337, -2313, -2289, -2265, 
  -2241, -2218, -2195, -2172, -2149, -2127, 
  -2105, -2083, -2061, -2039, -2018, -1997, 
  -1976, -1955, -1935, -1914, -1894, -1874, 
  -1854, -1834, -1815, -1796, -1776, -1757, 
  -1738, -1719, -1701, -1682, -1664, -1646, 
  -1628, -1610, -1592, -1574, -1557, -1539, 
  -1522, -1504, -1487, -1470, -1453, -1437, 
  -1420, -1403, -1387, -1371, -1354, -1338, 
  -1322, -1306, -1290, -1274, -1259, -1243, 
  -1228, -1212, -1197, -1181, -1166, -1151, 
  -1136, -1121, -1106, -1091, -1077, -1062, 
  -1048, -1033, -1019, -1004, -990, -976, -962, 
  -947, -933, -919, -906, -892, -878, -864, 
  -851, -837, -823, -810, -797, -783, -770, 
  -757, -743, -730, -717, -704, -691, -678, 
  -665, -652, -640, -627, -614, -602, -589, 
  -576, -564, -551, -539, -527, -514, -502, 
  -490, -478, -465, -453, -441, -429, -417, 
  -405, -393, -381, -370, -358, -346, -334, 
  -323, -311, -299, -288, -276, -265, -253, 
  -242, -230, -219, -207, -196, -185, -174, 
  -162, -151, -140, -129, -118, -107, -95, 
  -84, -73, -62, -52, -41, -30, -19, -8, 3, 
  14, 24, 35, 46, 56, 67, 78, 88, 99, 109, 
  120, 131, 141, 151, 162, 172, 183, 193, 203, 
  214, 224, 234, 245, 255, 265, 275, 286, 296, 
  306, 316, 326, 336, 346, 356, 366, 376, 386, 
  396, 406, 416, 426, 436, 446, 456, 466, 476, 
  485, 495, 505, 515, 525, 534, 544, 554, 563, 
  573, 583, 592, 602, 612, 621, 631, 641, 650, 
  660, 669, 679, 688, 698, 707, 717, 726, 736, 
  745, 754, 764, 773, 783, 792, 801, 811, 820, 
  829, 839, 848, 857, 867, 876, 885, 895, 904, 
  913, 922, 931, 941, 950, 959, 968, 977, 987, 
  996, 1005, 1014, 1023, 1032, 1041, 1050, 
  1060, 1069, 1078, 1087, 1096, 1105, 1114, 
  1123, 1132, 1141, 1150, 1159, 1168, 1177, 
  1186, 1195, 1204, 1213, 1222, 1231, 1240, 
  1249, 1258, 1266, 1275, 1284, 1293, 1302, 
  1311, 1320, 1329, 1338, 1346, 1355, 1364, 
  1373, 1382, 1391, 1400, 1408, 1417, 1426, 
  1435, 1444, 1452, 1461, 1470, 1479, 1488, 
  1496, 1505, 1514, 1523, 1532, 1540, 1549, 
  1558, 1567, 1575, 1584, 1593, 1602, 1610, 
  1619, 1628, 1637, 1645, 1654, 1663, 1671, 
  1680, 1689, 1698, 1706, 1715, 1724, 1732, 
  1741, 1750, 1758, 1767, 1776, 1785, 1793, 
  1802, 1811, 1819, 1828, 1837, 1845, 1854, 
  1863, 1871, 1880, 1889, 1897, 1906, 1915, 
  1924, 1932, 1941, 1950, 1958, 1967, 1976, 
  1984, 1993, 2002, 2010, 2019, 2028, 2036, 
  2045, 2054, 2062, 2071, 2080, 2088, 2097, 
  2106, 2114, 2123, 2132, 2140, 2149, 2158, 
  2167, 2175, 2184, 2193, 2201, 2210, 2219, 
  2227, 2236, 2245, 2254, 2262, 2271, 2280, 
  2288, 2297, 2306, 2315, 2323, 2332, 2341, 
  2350, 2358, 2367, 2376, 2384, 2393, 2402, 
  2411, 2420, 2428, 2437, 2446, 2455, 2463, 
  2472, 2481, 2490, 2499, 2507, 2516, 2525, 
  2534, 2543, 2551, 2560, 2569, 2578, 2587, 
  2596, 2604, 2613, 2622, 2631, 2640, 2649, 
  2658, 2667, 2675, 2684, 2693, 2702, 2711, 
  2720, 2729, 2738, 2747, 2756, 2765, 2774, 
  2783, 2792, 2801, 2810, 2819, 2828, 2837, 
  2846, 2855, 2864, 2873, 2882, 2891, 2900, 
  2909, 2918, 2927, 2936, 2945, 2954, 2963, 
  2972, 2982, 2991, 3000, 3009, 3018, 3027, 
  3036, 3046, 3055, 3064, 3073, 3082, 3092, 
  3101, 3110, 3119, 3129, 3138, 3147, 3157, 
  3166, 3175, 3184, 3194, 3203, 3213, 3222, 
  3231, 3241, 3250, 3259, 3269, 3278, 3288, 
  3297, 3307, 3316, 3326, 3335, 3345, 3354, 
  3364, 3373, 3383, 3392, 3402, 3411, 3421, 
  3431, 3440, 3450, 3460, 3469, 3479, 3489, 
  3498, 3508, 3518, 3528, 3537, 3547, 3557, 
  3567, 3576, 3586, 3596, 3606, 3616, 3626, 
  3636, 3646, 3655, 3665, 3675, 3685, 3695, 
  3705, 3715, 3725, 3735, 3745, 3756, 3766, 
  3776, 3786, 3796, 3806, 3816, 3827, 3837, 
  3847, 3857, 3868, 3878, 3888, 3899, 3909, 
  3919, 3930, 3940, 3950, 3961, 3971, 3982, 
  3992, 4003, 4013, 4024, 4034, 4045, 4056, 
  4066, 4077, 4088, 4098, 4109, 4120, 4130, 
  4141, 4152, 4163, 4174, 4185, 4195, 4206, 
  4217, 4228, 4239, 4250, 4261, 4272, 4283, 
  4294, 4306, 4317, 4328, 4339, 4350, 4362, 
  4373, 4384, 4395, 4407, 4418, 4429, 4441, 
  4452, 4464, 4475, 4487, 4498, 4510, 4522, 
  4533, 4545, 4557, 4568, 4580, 4592, 4604, 
  4615, 4627, 4639, 4651, 4663, 4675, 4687, 
  4699, 4711, 4723, 4736, 4748, 4760, 4772, 
  4785, 4797, 4809, 4822, 4834, 4846, 4859, 
  4871, 4884, 4897, 4909, 4922, 4935, 4947, 
  4960, 4973, 4986, 4999, 5012, 5025, 5038, 
  5051, 5064, 5077, 5090, 5103, 5116, 5130, 
  5143, 5156, 5170, 5183, 5197, 5210, 5224, 
  5238, 5251, 5265, 5279, 5293, 5306, 5320, 
  5334, 5348, 5362, 5376, 5391, 5405, 5419, 
  5433, 5448, 5462, 5477, 5491, 5506, 5520, 
  5535, 5550, 5564, 5579, 5594, 5609, 5624, 
  5639, 5654, 5670, 5685, 5700, 5715, 5731, 
  5746, 5762, 5778, 5793, 5809, 5825, 5841, 
  5857, 5873, 5889, 5905, 5921, 5937, 5954, 
  5970, 5986, 6003, 6020, 6036, 6053, 6070, 
  6087, 6104, 6121, 6138, 6156, 6173, 6190, 
  6208, 6225, 6243, 6261, 6279, 6297, 6315, 
  6333, 6351, 6369, 6388, 6406, 6425, 6443, 
  6462, 6481, 6500, 6519, 6538, 6557, 6577, 
  6596, 6616, 6636, 6655, 6675, 6695, 6716, 
  6736, 6756, 6777, 6797, 6818, 6839, 6860, 
  6881, 6902, 6924, 6945, 6967, 6989, 7011, 
  7033, 7055, 7077, 7100, 7122, 7145, 7168, 
  7191, 7214, 7238, 7261, 7285, 7309, 7333, 
  7357, 7381, 7406, 7431, 7456, 7481, 7506, 
  7532, 7557, 7583, 7609, 7636, 7662, 7689, 
  7716, 7743, 7770, 7798, 7826, 7854, 7882, 
  7910, 7939, 7968, 7997, 8027, 8057, 8087, 
  8117, 8148, 8178, 8210, 8241, 8273, 8305, 
  8337, 8370, 8403, 8436, 8470, 8504, 8538, 
  8573, 8608, 8643, 8679, 8715, 8752, 8789, 
  8827, 8864, 8903, 8941, 8981, 9020, 9061, 
  9101, 9142, 9184, 9226, 9269, 9312, 9356, 
  9401, 9446, 9491, 9538, 9584, 9632, 9680, 
  9729, 9779, 9830, 9881, 9933, 9986, 10040, 
  10094, 10150, 10206, 10264, 10322, 10381, 
  10442, 10504, 10566, 10630, 10695, 10762, 
  10830, 10899, 10969, 11041, 11115, 11190, 
  11267, 11346, 11426, 11509, 11593, 11680, 
  11768, 11859, 11953, 12049, 12148, 12249, 
  12354, 12462, 12573, 12688, 12806, 12929, 
  13056, 13187, 13324, 13466, 13613, 13767, 
  13927, 14095, 14270, 14454, 14647, 14851, 
  15066, 15293, 15535, 15793, 16068, 16363, 
  16682, 17028, 17405, 17819, 18277, 18790, 
  19369, 20034, 20810, 21737, 22880, 24351, 
  26379, 29519, 35824, 42129
}; 
