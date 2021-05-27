/**
 * @file font8x8_readable.h
 *
 * @brief a clean simple font to use with an ssd1306 screen
 */

#ifndef MAIN_FONT8X8_READABLE_H_
#define MAIN_FONT8X8_READABLE_H_

// Font: READABLE.pf

#ifdef CONFIG_SSID_FONT_READABLE
static uint8_t font8x8_readable[128][8] =
    {
        {0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00}, // Char 000 (.)
        {0x7E, 0x81, 0xA5, 0xB1, 0xB1, 0x95, 0x81, 0x7E}, // Char 001 (.)
        {0x7E, 0xFF, 0xDB, 0xCF, 0xCF, 0xEB, 0xFF, 0x7E}, // Char 002 (.)
        {0x0E, 0x1F, 0x3F, 0x7E, 0x3F, 0x1F, 0x0E, 0x00}, // Char 003 (.)
        {0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00}, // Char 004 (.)
        {0x18, 0x9A, 0x9F, 0xFF, 0x9F, 0x9A, 0x18, 0x00}, // Char 005 (.)
        {0x10, 0xB8, 0xBC, 0xFE, 0xFE, 0xBC, 0xB8, 0x10}, // Char 006 (.)
        {0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00}, // Char 007 (.)
        {0xFF, 0xFF, 0xE7, 0xC3, 0xC3, 0xE7, 0xFF, 0xFF}, // Char 008 (.)
        {0x00, 0x3C, 0x66, 0x42, 0x42, 0x66, 0x3C, 0x00}, // Char 009 (.)
        {0xFF, 0xC3, 0x99, 0xBD, 0xBD, 0x99, 0xC3, 0xFF}, // Char 010 (.)
        {0x70, 0xF8, 0x88, 0x88, 0xFD, 0x7F, 0x07, 0x0F}, // Char 011 (.)
        {0x00, 0x4E, 0x5F, 0xF1, 0xF1, 0x5F, 0x4E, 0x00}, // Char 012 (.)
        {0xC0, 0xE0, 0xFF, 0x7F, 0x05, 0x05, 0x07, 0x07}, // Char 013 (.)
        {0xC0, 0xFF, 0x7F, 0x05, 0x05, 0x65, 0x7F, 0x3F}, // Char 014 (.)
        {0x99, 0x5A, 0x3C, 0xE7, 0xE7, 0x3C, 0x5A, 0x99}, // Char 015 (.)
        {0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00}, // Char 016 (.)
        {0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x00}, // Char 017 (.)
        {0x00, 0x24, 0x66, 0xFF, 0xFF, 0x66, 0x24, 0x00}, // Char 018 (.)
        {0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00}, // Char 019 (.)
        {0x06, 0x0F, 0x09, 0x7F, 0x7F, 0x01, 0x7F, 0x7F}, // Char 020 (.)
        {0x80, 0x9E, 0xBF, 0xA5, 0xA5, 0xFD, 0x79, 0x01}, // Char 021 (.)
        {0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00}, // Char 022 (.)
        {0x80, 0x94, 0xB6, 0xFF, 0xFF, 0xB6, 0x94, 0x80}, // Char 023 (.)
        {0x00, 0x04, 0x06, 0x7F, 0x7F, 0x06, 0x04, 0x00}, // Char 024 (.)
        {0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00}, // Char 025 (.)
        {0x08, 0x08, 0x08, 0x2A, 0x3E, 0x1C, 0x08, 0x00}, // Char 026 (.)
        {0x08, 0x1C, 0x3E, 0x2A, 0x08, 0x08, 0x08, 0x00}, // Char 027 (.)
        {0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00}, // Char 028 (.)
        {0x08, 0x1C, 0x3E, 0x08, 0x08, 0x3E, 0x1C, 0x08}, // Char 029 (.)
        {0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30}, // Char 030 (.)
        {0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06}, // Char 031 (.)
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // Char 032 ( )
        {0x00, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x00}, // Char 033 (!)
        {0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00}, // Char 034 (")
        {0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, 0x00}, // Char 035 (#)
        {0x24, 0x2E, 0x2A, 0x6B, 0x6B, 0x3A, 0x12, 0x00}, // Char 036 ($)
        {0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00}, // Char 037 (%)
        {0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, 0x00}, // Char 038 (&)
        {0x00, 0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00}, // Char 039 (')
        {0x00, 0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00}, // Char 040 (()
        {0x00, 0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00}, // Char 041 ())
        {0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, 0x08}, // Char 042 (*)
        {0x00, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00}, // Char 043 (+)
        {0x00, 0x00, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00}, // Char 044 (,)
        {0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, // Char 045 (-)
        {0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00}, // Char 046 (.)
        {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // Char 047 (/)
        {0x3E, 0x7F, 0x59, 0x4D, 0x47, 0x7F, 0x3E, 0x00}, // Char 048 (0)
        {0x00, 0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00}, // Char 049 (1)
        {0x72, 0x7B, 0x49, 0x49, 0x49, 0x4F, 0x46, 0x00}, // Char 050 (2)
        {0x41, 0x41, 0x49, 0x49, 0x49, 0x7F, 0x36, 0x00}, // Char 051 (3)
        {0x1E, 0x1E, 0x10, 0x10, 0x7F, 0x7F, 0x10, 0x00}, // Char 052 (4)
        {0x27, 0x67, 0x45, 0x45, 0x45, 0x7D, 0x39, 0x00}, // Char 053 (5)
        {0x3E, 0x7F, 0x49, 0x49, 0x49, 0x79, 0x30, 0x00}, // Char 054 (6)
        {0x01, 0x01, 0x61, 0x71, 0x19, 0x0F, 0x07, 0x00}, // Char 055 (7)
        {0x36, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, 0x00}, // Char 056 (8)
        {0x06, 0x4F, 0x49, 0x49, 0x49, 0x7F, 0x3E, 0x00}, // Char 057 (9)
        {0x00, 0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00}, // Char 058 (:)
        {0x00, 0x00, 0x80, 0xE6, 0x66, 0x00, 0x00, 0x00}, // Char 059 (;)
        {0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00}, // Char 060 (<)
        {0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00}, // Char 061 (=)
        {0x00, 0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00}, // Char 062 (>)
        {0x00, 0x02, 0x03, 0x59, 0x5D, 0x07, 0x02, 0x00}, // Char 063 (?)
        {0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x5F, 0x5E, 0x00}, // Char 064 (@)
        {0x7C, 0x7E, 0x13, 0x11, 0x13, 0x7E, 0x7C, 0x00}, // Char 065 (A)
        {0x7F, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, 0x00}, // Char 066 (B)
        {0x3E, 0x7F, 0x41, 0x41, 0x41, 0x63, 0x22, 0x00}, // Char 067 (C)
        {0x7F, 0x7F, 0x41, 0x41, 0x63, 0x3E, 0x1C, 0x00}, // Char 068 (D)
        {0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x41, 0x00}, // Char 069 (E)
        {0x7F, 0x7F, 0x09, 0x09, 0x09, 0x01, 0x01, 0x00}, // Char 070 (F)
        {0x3E, 0x7F, 0x41, 0x41, 0x51, 0x73, 0x32, 0x00}, // Char 071 (G)
        {0x7F, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x7F, 0x00}, // Char 072 (H)
        {0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00}, // Char 073 (I)
        {0x20, 0x60, 0x40, 0x40, 0x40, 0x7F, 0x3F, 0x00}, // Char 074 (J)
        {0x7F, 0x7F, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00}, // Char 075 (K)
        {0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00}, // Char 076 (L)
        {0x7F, 0x7F, 0x0E, 0x1C, 0x0E, 0x7F, 0x7F, 0x00}, // Char 077 (M)
        {0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, 0x00}, // Char 078 (N)
        {0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, 0x00}, // Char 079 (O)
        {0x7F, 0x7F, 0x09, 0x09, 0x09, 0x0F, 0x06, 0x00}, // Char 080 (P)
        {0x3E, 0x7F, 0x41, 0x71, 0x61, 0xFF, 0xBE, 0x00}, // Char 081 (Q)
        {0x7F, 0x7F, 0x09, 0x19, 0x39, 0x6F, 0x46, 0x00}, // Char 082 (R)
        {0x26, 0x6F, 0x49, 0x49, 0x49, 0x7B, 0x32, 0x00}, // Char 083 (S)
        {0x01, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x01}, // Char 084 (T)
        {0x7F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x7F, 0x00}, // Char 085 (U)
        {0x1F, 0x3F, 0x60, 0x60, 0x60, 0x3F, 0x1F, 0x00}, // Char 086 (V)
        {0x3F, 0x7F, 0x60, 0x30, 0x60, 0x7F, 0x3F, 0x00}, // Char 087 (W)
        {0x63, 0x77, 0x1C, 0x08, 0x1C, 0x77, 0x63, 0x00}, // Char 088 (X)
        {0x47, 0x4F, 0x68, 0x38, 0x18, 0x0F, 0x07, 0x00}, // Char 089 (Y)
        {0x41, 0x61, 0x71, 0x59, 0x4D, 0x47, 0x43, 0x00}, // Char 090 (Z)
        {0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00}, // Char 091 ([)
        {0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00}, // Char 092 (\)
        {0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00}, // Char 093 (])
        {0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00}, // Char 094 (^)
        {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}, // Char 095 (_)
        {0x00, 0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00}, // Char 096 (`)
        {0x20, 0x74, 0x54, 0x54, 0x54, 0x7C, 0x78, 0x00}, // Char 097 (a)
        {0x7F, 0x7F, 0x48, 0x48, 0x48, 0x78, 0x30, 0x00}, // Char 098 (b)
        {0x38, 0x7C, 0x44, 0x44, 0x44, 0x6C, 0x28, 0x00}, // Char 099 (c)
        {0x30, 0x78, 0x48, 0x48, 0x48, 0x7F, 0x7F, 0x00}, // Char 100 (d)
        {0x38, 0x7C, 0x54, 0x54, 0x54, 0x5C, 0x18, 0x00}, // Char 101 (e)
        {0x00, 0x48, 0x7E, 0x7F, 0x49, 0x03, 0x02, 0x00}, // Char 102 (f)
        {0x98, 0xBC, 0xA4, 0xA4, 0xA4, 0xFC, 0x7C, 0x00}, // Char 103 (g)
        {0x7F, 0x7F, 0x04, 0x04, 0x04, 0x7C, 0x78, 0x00}, // Char 104 (h)
        {0x00, 0x00, 0x44, 0x7D, 0x7D, 0x40, 0x00, 0x00}, // Char 105 (i)
        {0x40, 0xC0, 0x80, 0x80, 0x80, 0xFD, 0x7D, 0x00}, // Char 106 (j)
        {0x7F, 0x7F, 0x10, 0x18, 0x3C, 0x64, 0x40, 0x00}, // Char 107 (k)
        {0x00, 0x00, 0x41, 0x7F, 0x7F, 0x40, 0x00, 0x00}, // Char 108 (l)
        {0x7C, 0x7C, 0x18, 0x78, 0x1C, 0x7C, 0x78, 0x00}, // Char 109 (m)
        {0x7C, 0x7C, 0x04, 0x04, 0x04, 0x7C, 0x78, 0x00}, // Char 110 (n)
        {0x38, 0x7C, 0x44, 0x44, 0x44, 0x7C, 0x38, 0x00}, // Char 111 (o)
        {0xFC, 0xFC, 0x24, 0x24, 0x24, 0x3C, 0x18, 0x00}, // Char 112 (p)
        {0x18, 0x3C, 0x24, 0x24, 0x24, 0xFC, 0xFC, 0x00}, // Char 113 (q)
        {0x7C, 0x7C, 0x04, 0x04, 0x04, 0x0C, 0x08, 0x00}, // Char 114 (r)
        {0x48, 0x5C, 0x54, 0x54, 0x54, 0x74, 0x24, 0x00}, // Char 115 (s)
        {0x00, 0x04, 0x04, 0x3F, 0x7F, 0x44, 0x44, 0x00}, // Char 116 (t)
        {0x3C, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x7C, 0x00}, // Char 117 (u)
        {0x1C, 0x3C, 0x60, 0x60, 0x60, 0x3C, 0x1C, 0x00}, // Char 118 (v)
        {0x3C, 0x7C, 0x60, 0x30, 0x60, 0x7C, 0x3C, 0x00}, // Char 119 (w)
        {0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, 0x44, 0x00}, // Char 120 (x)
        {0x9C, 0xBC, 0xA0, 0xA0, 0xA0, 0xFC, 0x7C, 0x00}, // Char 121 (y)
        {0x44, 0x64, 0x74, 0x54, 0x5C, 0x4C, 0x44, 0x00}, // Char 122 (z)
        {0x00, 0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00}, // Char 123 ({)
        {0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00}, // Char 124 (|)
        {0x00, 0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00}, // Char 125 (})
        {0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00}, // Char 126 (~)
        {0x70, 0x78, 0x4C, 0x46, 0x4C, 0x78, 0x70, 0x00}, // Char 127 (.)
};
#endif // CONFIG_SSID_FONT_READABLE

#endif /* MAIN_FONT8X8_READABLE_H_ */
