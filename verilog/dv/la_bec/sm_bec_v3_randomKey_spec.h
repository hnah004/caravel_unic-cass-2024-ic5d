#ifndef DATA_H
#define DATA_H

uint32_t w1[] = { 0x0000B6FD, 0x316D5DE4, 0x7DB10F18, 0x000373AA, 0xE46D5179, 0xFD1CCCB5 };
uint32_t z1[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 };
uint32_t w2[] = { 0x000043C9, 0xD3FABB3F, 0x5BF1286B, 0x00014298, 0xF745B715, 0x0BB9C6AA };
uint32_t z2[] = { 0x00002C6F, 0xA054978E, 0x22995781, 0x000048F1, 0x196D63B6, 0x746E0C69 };
uint32_t inv_w0[] = { 0x00009599, 0x4A915123, 0x1F03E8F7, 0x0002E973, 0xB9D4823D, 0x01D9947C };
uint32_t d[] = { 0x00006FA6, 0x73AE2CB1, 0x79687FEA, 0x00010A69, 0xEE28D4A3, 0x7FD7CAC3 };

uint32_t k_array[2][6] = {
    {0x0000D828, 0xA32B44CE, 0x2DBF67C1, 0x0003382D, 0x35EA19C9, 0xB1538F1A},
    {0x0000F034, 0xBEFDBCFB, 0x66B99D90, 0x00014992, 0x075E26A7, 0xC3BD4C4E}
};

uint32_t wA_array[2][6] = {
    {0x00015EB0, 0xBDE527BA, 0x03D47136, 0x0002DE80, 0x55EEBBFB, 0x122FA4C7},
    {0x0001D784, 0xACBCBC78, 0x31CB4D8D, 0x00025F33, 0x2B0237C9, 0xB10DBD33}
};

uint32_t zA_array[2][6] = {
    {0x0001B7A9, 0x54199C65, 0x1C7A7F63, 0x000318F9, 0xE7DB089E, 0x0032882B},
    {0x00003186, 0x8458368D, 0xF75815D4, 0x00033435, 0xCF8A3E7D, 0x9226DF73}
};
#endif // DATA_H