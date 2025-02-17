#pragma once

#include <vector>

namespace qrcode {
const std::vector<char> ALPHANUMERIC_VALUES = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E',
    'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '$', '%', '*', '+', '-', '.', '/', ':'};

const uint16_t CAPACITIES[40][4][4] = {
    // version, mode, error correction level
    {{41, 34, 27, 17}, {25, 20, 16, 10}, {17, 14, 11, 7}, {10, 8, 7, 4}},
    {{77, 63, 48, 34}, {47, 38, 29, 20}, {32, 26, 20, 14}, {20, 16, 12, 8}},
    {{127, 101, 77, 58}, {77, 61, 47, 35}, {53, 42, 32, 24}, {32, 26, 20, 15}},
    {{187, 149, 111, 82},
     {114, 90, 67, 50},
     {78, 62, 46, 34},
     {48, 38, 28, 21}},
    {{255, 202, 144, 106},
     {154, 122, 87, 64},
     {106, 84, 60, 44},
     {65, 52, 37, 27}},
    {{322, 255, 178, 139},
     {195, 154, 108, 84},
     {134, 106, 74, 58},
     {82, 65, 45, 36}},
    {{370, 293, 207, 154},
     {224, 178, 125, 93},
     {154, 122, 86, 64},
     {95, 75, 53, 39}},
    {{461, 365, 259, 202},
     {279, 221, 157, 122},
     {192, 152, 108, 84},
     {118, 93, 66, 52}},
    {{552, 432, 312, 235},
     {335, 262, 189, 143},
     {230, 180, 130, 98},
     {141, 111, 80, 60}},
    {{652, 513, 364, 288},
     {395, 311, 221, 174},
     {271, 213, 151, 119},
     {167, 131, 93, 74}},
    {{772, 604, 427, 331},
     {468, 366, 259, 200},
     {321, 251, 177, 137},
     {198, 155, 109, 85}},
    {{883, 691, 489, 374},
     {535, 419, 296, 227},
     {367, 287, 203, 155},
     {226, 177, 125, 96}},
    {{1022, 796, 580, 427},
     {619, 483, 352, 259},
     {425, 331, 241, 177},
     {261, 204, 149, 109}},
    {{1101, 871, 621, 468},
     {667, 528, 376, 283},
     {458, 362, 258, 194},
     {282, 223, 159, 120}},
    {{1250, 991, 703, 530},
     {758, 600, 426, 321},
     {520, 412, 292, 220},
     {320, 254, 180, 136}},
    {{1408, 1082, 775, 602},
     {854, 656, 470, 365},
     {586, 450, 322, 250},
     {361, 277, 198, 154}},
    {{1548, 1212, 876, 674},
     {938, 734, 531, 408},
     {644, 504, 364, 280},
     {397, 310, 224, 173}},
    {{1725, 1346, 948, 746},
     {1046, 816, 574, 452},
     {718, 560, 394, 310},
     {442, 345, 243, 191}},
    {{1903, 1500, 1063, 813},
     {1153, 909, 644, 493},
     {792, 624, 442, 338},
     {488, 384, 272, 208}},
    {{2061, 1600, 1159, 919},
     {1249, 970, 702, 557},
     {858, 666, 482, 382},
     {528, 410, 297, 235}},
    {{2232, 1708, 1224, 969},
     {1352, 1035, 742, 587},
     {929, 711, 509, 403},
     {572, 438, 314, 248}},
    {{2409, 1872, 1358, 1056},
     {1460, 1134, 823, 640},
     {1003, 779, 565, 439},
     {618, 480, 348, 270}},
    {{2620, 2059, 1468, 1108},
     {1588, 1248, 890, 672},
     {1091, 857, 611, 461},
     {672, 528, 376, 284}},
    {{2812, 2188, 1588, 1228},
     {1704, 1326, 963, 744},
     {1171, 911, 661, 511},
     {721, 561, 407, 315}},
    {{3057, 2395, 1718, 1286},
     {1853, 1451, 1041, 779},
     {1273, 997, 715, 535},
     {784, 614, 440, 330}},
    {{3283, 2544, 1804, 1425},
     {1990, 1542, 1094, 864},
     {1367, 1059, 751, 593},
     {842, 652, 462, 365}},
    {{3517, 2701, 1933, 1501},
     {2132, 1637, 1172, 910},
     {1465, 1125, 805, 625},
     {902, 692, 496, 385}},
    {{3669, 2857, 2085, 1581},
     {2223, 1732, 1263, 958},
     {1528, 1190, 868, 658},
     {940, 742, 534, 405}},
    {{3909, 3035, 3181, 1677},
     {2369, 1839, 1322, 1016},
     {1628, 1264, 908, 698},
     {1002, 778, 559, 430}},
    {{4158, 3289, 2358, 1782},
     {2520, 1994, 1429, 1080},
     {1732, 1370, 982, 742},
     {1066, 843, 604, 457}},
    {{4417, 3486, 2473, 1897},
     {2677, 2113, 1499, 1150},
     {1840, 1452, 1030, 790},
     {1132, 894, 634, 486}},
    {{4686, 3693, 2670, 2022},
     {2840, 2238, 1618, 1226},
     {1952, 1538, 1112, 842},
     {1201, 947, 684, 518}},
    {{4965, 3909, 2805, 2157},
     {3009, 2369, 1700, 1307},
     {2068, 1628, 1168, 898},
     {1273, 1002, 719, 553}},
    {{5253, 4134, 2949, 2301},
     {3183, 2506, 1787, 1394},
     {2188, 1722, 1228, 958},
     {1347, 1060, 756, 590}},
    {{5529, 4343, 3081, 2361},
     {3351, 2632, 1867, 1431},
     {2303, 1809, 1283, 983},
     {1417, 1113, 790, 605}},
    {{5836, 4588, 3244, 2524},
     {3537, 2780, 1966, 1530},
     {2431, 1911, 1351, 1051},
     {1496, 1176, 832, 647}},
    {{6153, 4775, 3417, 2625},
     {3729, 2894, 2071, 1591},
     {2563, 1989, 1423, 1093},
     {1577, 1224, 876, 673}},
    {{6479, 5039, 3599, 2735},
     {3927, 3054, 2181, 1658},
     {2699, 2099, 1499, 1139},
     {1661, 1292, 923, 701}},
    {{6743, 5313, 3791, 2927},
     {4087, 3220, 2298, 1774},
     {2809, 2213, 1579, 1219},
     {1729, 1362, 972, 750}},
    {{7089, 5596, 3993, 3057},
     {4296, 3391, 2420, 1852},
     {2953, 2331, 1663, 1273},
     {1817, 1435, 1024, 784}}};

const uint8_t MODE_INDICATORS[5] = {0x1, 0x2, 0x4, 0x8, 0x7};

const uint8_t CHARACTER_COUNT_INDICATORS[3][4] = {
    // version, mode
    {10, 9, 8, 8},
    {12, 11, 16, 10},
    {14, 13, 16, 12}};

const uint16_t TOTAL_NUMBER_OF_DATA_CODEWORDS[40][4] = {
    // Version, Ecc Mode
    {19, 16, 13, 9},          {34, 28, 22, 16},
    {55, 44, 34, 26},         {80, 64, 48, 36},
    {108, 86, 62, 46},        {136, 108, 76, 60},
    {156, 124, 88, 66},       {194, 154, 110, 86},
    {232, 182, 132, 100},     {274, 216, 154, 122},
    {324, 254, 180, 140},     {370, 290, 206, 158},
    {428, 334, 244, 180},     {461, 365, 261, 197},
    {523, 415, 295, 223},     {589, 453, 325, 253},
    {647, 507, 367, 283},     {721, 563, 397, 313},
    {795, 627, 445, 341},     {861, 669, 485, 385},
    {932, 714, 512, 406},     {1006, 782, 568, 442},
    {1094, 860, 614, 464},    {1174, 914, 664, 514},
    {1276, 1000, 718, 538},   {1370, 1062, 754, 596},
    {1468, 1128, 808, 628},   {1531, 1193, 871, 661},
    {1631, 1267, 911, 701},   {1735, 1373, 985, 745},
    {1843, 1455, 1033, 793},  {1955, 1541, 1115, 845},
    {2071, 1631, 1171, 901},  {2191, 1725, 1231, 961},
    {2306, 1812, 1286, 986},  {2434, 1914, 1354, 1054},
    {2566, 1992, 1426, 1096}, {2702, 2102, 1502, 1142},
    {2812, 2216, 1582, 1222}, {2956, 2334, 1666, 1276}};

const uint8_t EC_CODEWORDS_PER_BLOCK[40][4] = {
    // Version, Ecc Mode
    {7, 10, 13, 17},  {10, 16, 22, 28}, {15, 26, 18, 22}, {20, 18, 26, 16},
    {26, 24, 18, 22}, {18, 16, 24, 28}, {20, 18, 18, 26}, {24, 22, 22, 26},
    {30, 22, 20, 24}, {18, 26, 24, 28}, {20, 30, 28, 24}, {24, 22, 26, 28},
    {26, 22, 24, 22}, {30, 24, 20, 24}, {22, 24, 30, 24}, {24, 28, 24, 30},
    {28, 28, 28, 28}, {30, 26, 28, 28}, {28, 26, 26, 26}, {28, 26, 30, 28},
    {28, 26, 28, 30}, {28, 28, 30, 24}, {30, 28, 30, 30}, {26, 28, 30, 30},
    {28, 28, 28, 30}, {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30},
    {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30},
    {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30},
    {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30}, {30, 28, 30, 30}};

const uint8_t NUMBER_OF_BLOCKS_IN_GROUP_1[40][4] = {
    // Version, Ecc Mode
    {1, 1, 1, 1},     {1, 1, 1, 1},     {1, 1, 2, 2},     {1, 2, 2, 4},
    {1, 2, 2, 2},     {2, 4, 4, 4},     {2, 4, 2, 4},     {2, 2, 4, 4},
    {2, 3, 4, 4},     {2, 4, 6, 6},     {4, 1, 4, 3},     {2, 6, 4, 7},
    {4, 8, 8, 12},    {3, 4, 11, 11},   {5, 5, 5, 11},    {5, 7, 15, 3},
    {1, 10, 1, 2},    {5, 9, 17, 2},    {3, 3, 17, 9},    {3, 3, 15, 15},
    {4, 17, 17, 19},  {2, 17, 7, 34},   {4, 4, 11, 16},   {6, 6, 11, 30},
    {8, 8, 7, 22},    {10, 19, 28, 33}, {8, 22, 8, 12},   {3, 3, 4, 11},
    {7, 21, 1, 19},   {5, 19, 15, 23},  {13, 2, 42, 23},  {17, 10, 10, 19},
    {17, 14, 29, 11}, {13, 14, 44, 59}, {12, 12, 39, 22}, {6, 6, 46, 2},
    {17, 29, 49, 24}, {4, 13, 48, 42},  {20, 40, 43, 10}, {19, 18, 34, 20}};

const uint8_t NUMBER_OF_DATA_CODEWORDS_IN_EACH_OF_GROUP_1[40][4] = {
    // Version, Ecc Mode
    {19, 16, 13, 9},   {34, 28, 22, 16},  {55, 44, 17, 13},  {80, 32, 24, 9},
    {108, 43, 15, 11}, {68, 27, 19, 15},  {78, 31, 14, 13},  {97, 38, 18, 14},
    {116, 36, 16, 12}, {68, 43, 19, 15},  {81, 50, 22, 12},  {92, 36, 20, 14},
    {107, 37, 20, 11}, {115, 40, 16, 12}, {87, 41, 24, 12},  {98, 45, 19, 15},
    {107, 46, 22, 14}, {120, 43, 22, 14}, {113, 44, 21, 13}, {107, 41, 24, 15},
    {116, 42, 22, 16}, {111, 46, 24, 13}, {121, 47, 24, 15}, {117, 45, 24, 16},
    {106, 47, 24, 15}, {114, 46, 22, 16}, {122, 45, 23, 15}, {117, 45, 24, 15},
    {116, 45, 23, 15}, {115, 47, 24, 15}, {115, 46, 24, 15}, {115, 46, 24, 15},
    {115, 46, 24, 15}, {115, 46, 24, 16}, {121, 47, 24, 15}, {121, 47, 24, 15},
    {122, 46, 24, 15}, {122, 46, 24, 15}, {117, 47, 24, 15}, {118, 47, 24, 15}};

const uint8_t NUMBER_OF_BLOCKS_IN_GROUP_2[40][4] = {
    // Version, Ecc Mode
    {0, 0, 0, 0},    {0, 0, 0, 0},     {0, 0, 0, 0},    {0, 0, 0, 0},
    {0, 0, 2, 2},    {0, 0, 0, 0},     {0, 0, 4, 1},    {0, 2, 2, 2},
    {0, 2, 4, 4},    {2, 1, 2, 2},     {0, 4, 4, 8},    {2, 2, 6, 4},
    {0, 1, 4, 4},    {1, 5, 5, 5},     {1, 5, 7, 7},    {1, 3, 2, 13},
    {5, 1, 15, 17},  {1, 4, 1, 19},    {4, 11, 4, 16},  {5, 13, 5, 10},
    {4, 0, 6, 6},    {7, 0, 16, 0},    {5, 14, 14, 14}, {4, 14, 16, 2},
    {4, 13, 22, 13}, {2, 4, 6, 4},     {4, 3, 26, 28},  {10, 23, 31, 31},
    {7, 7, 37, 26},  {10, 10, 25, 25}, {3, 29, 1, 28},  {0, 23, 35, 35},
    {1, 21, 19, 46}, {6, 23, 7, 1},    {7, 26, 14, 41}, {14, 34, 10, 64},
    {4, 14, 10, 46}, {18, 32, 14, 32}, {4, 7, 22, 67},  {6, 31, 34, 61}};

const uint8_t NUMBER_OF_DATA_CODEWORDS_IN_EACH_OF_GROUP_2[40][4] = {
    // Version, Ecc Mode
    {0, 0, 0, 0},      {0, 0, 0, 0},      {0, 0, 0, 0},      {0, 0, 0, 0},
    {0, 0, 16, 12},    {0, 0, 0, 0},      {0, 0, 15, 14},    {0, 39, 19, 15},
    {0, 37, 17, 13},   {69, 44, 20, 16},  {0, 51, 23, 13},   {93, 37, 21, 15},
    {0, 38, 21, 12},   {116, 41, 17, 13}, {88, 42, 25, 13},  {99, 46, 20, 16},
    {108, 47, 23, 15}, {121, 44, 23, 15}, {114, 45, 22, 14}, {108, 42, 25, 16},
    {117, 0, 23, 17},  {112, 0, 25, 0},   {122, 48, 25, 16}, {118, 46, 25, 17},
    {107, 48, 25, 16}, {115, 47, 23, 17}, {123, 46, 24, 16}, {118, 46, 25, 16},
    {117, 46, 24, 16}, {116, 48, 25, 16}, {116, 47, 25, 16}, {0, 47, 25, 16},
    {116, 47, 25, 16}, {116, 47, 25, 17}, {122, 48, 25, 16}, {122, 48, 25, 16},
    {123, 47, 25, 16}, {123, 47, 25, 16}, {118, 48, 25, 16}, {119, 48, 25, 16}};

const uint8_t REMAINDER_BITS[40] = {0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 3,
                                    3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 3,
                                    3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0};

}  // namespace qrcode