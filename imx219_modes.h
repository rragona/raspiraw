/*
Copyright (c) 2017, Raspberry Pi Foundation
Copyright (c) 2017, Dave Stevenson
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// These values are copied from https://www.raspberrypi.org/forums/viewtopic.php?f=43&t=162722&p=1052339
// Raspberry Pi can not discuss these settings as we have information from
// Sony under NDA.

// REQUESTS FOR SUPPORT ABOUT THESE REGISTER VALUES WILL
// BE IGNORED BY PI TOWERS.

#ifndef IMX219MODES_H_
#define IMX219MODES_H_

struct sensor_regs imx219_8MPix[] =
{
      /* 3280x2464@15 FPS */
      {0x0100, 0x00},       // 0=OFF, 1=Stream, 2=MAX
      {0x30EB, 0x05},
      {0x30EB, 0x0C},
      {0x300A, 0xFF},
      {0x300B, 0xFF},
      {0x30EB, 0x05},
      {0x30EB, 0x09},
      {0x0114, 0x01},      // CSI MIPI Lanes [1:0]  (0x01=2, 0x03=4)
      {0x0128, 0x00},      // DPHY_CNTRL
      {0x012A, 0x18},      // EXCK_FREQ [15:8]
      {0x012B, 0x00},      // EXCK_FREQ [7:0]
      {0x0157, 0x00},         // Analog Gain
      {0x0158, 0x01},         // Digital Gain [15:8]
      {0x0159, 0x00},          // Digital Gain [7:0]
      {0x015A, 0x01},      // Shutter/Integration Time [15:8]
      {0x015B, 0x00},      // Shutter/Integration Time [7:0]
      {0x0160, 0x09},      // Frame Length [15:8]
      {0x0161, 0xC8},      // Frame Length [7:0]
      {0x0162, 0x0D},      // Line Length [15:8]
      {0x0163, 0x78},      // Line Length [7:0]
      {0x0164, 0x00},
      {0x0165, 0x00},
      {0x0166, 0x0C},
      {0x0167, 0xCF},
      {0x0168, 0x00},
      {0x0169, 0x00},
      {0x016A, 0x09},
      {0x016B, 0x9F},
      {0x016C, 0x0C},
      {0x016D, 0xD0},
      {0x016E, 0x09},
      {0x016F, 0xA0},
      {0x0170, 0x01},      // X_ODD_INC [2:0]
      {0x0171, 0x01},      // Y_ODD_INC [2:0]
      {0x0172, 0x03},
      {0x0174, 0x00},      // Binning Mode H_A
      {0x0175, 0x00},      // Binning Mode V_A
      {0x018C, 0x0A},      // CSI Data Format [15:8]
      {0x018D, 0x0A},      // CSI Data Format [7:0]
      {0x0301, 0x05},      // VTPXCK_DIV
      {0x0303, 0x01},      // VTSYCK_DIV
      {0x0304, 0x03},      // PREPLLCK_VT_DIV [3:0]
      {0x0305, 0x03},      // PREPLLCK_OP_DIV [3:0]
      {0x0306, 0x00},      // PLL_VT_MPY [10:8]
      {0x0307, 0x2B},      // PLL_VT_MPY [7:0]
      {0x0309, 0x0A},      // OPPXCK_DIV [4:0]
      {0x030B, 0x01},      // OPSYCK_DIV
      {0x030C, 0x00},      // PLL_OP_MPY [10:8]
      {0x030D, 0x55},      // PLL_OP_MPY [7:0]
      {0x455E, 0x00},      // CIS Tuning ?
      {0x471E, 0x4B},      // CIS Tuning ?
      {0x4767, 0x0F},      // CIS Tuning ?
      {0x4750, 0x14},      // CIS Tuning ?
      {0x4540, 0x00},      // CIS Tuning ?
      {0x47B4, 0x14},      // CIS Tuning ?
      {0x4713, 0x30},      // CIS Tuning ?
      {0x478B, 0x10},      // CIS Tuning ?
      {0x478F, 0x10},      // CIS Tuning ?
      {0x4797, 0x0E},      // CIS Tuning ?
      {0x479B, 0x0E},      // CIS Tuning ?
      {0x0100, 0x01}
};

// Register setting provided on
// https://www.raspberrypi.org/forums/viewtopic.php?f=43&t=109137&start=350#p1259865
// with the addreg macro removed.
struct sensor_regs imx219_mode1[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x05},
      {0x30eb, 0x0c},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x0164, 0x02},
      {0x0165, 0xa8},
      {0x0166, 0x0a},
      {0x0167, 0x27},
      {0x0168, 0x02},
      {0x0169, 0xb4},
      {0x016a, 0x06},
      {0x016b, 0xeb},
      {0x016c, 0x07},
      {0x016d, 0x80},
      {0x016e, 0x04},
      {0x016f, 0x38},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x00},
      {0x0175, 0x00},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},

      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x06},
      {0x0161, 0xe3},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x015a, 0x00},
      {0x015b, 0x31},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode2[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x0c},
      {0x30eb, 0x05},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x00},
      {0x0165, 0x00},
      {0x0166, 0x0c},
      {0x0167, 0xcf},
      {0x0168, 0x00},
      {0x0169, 0x00},
      {0x016a, 0x09},
      {0x016b, 0x9f},
      {0x016c, 0x0c},
      {0x016d, 0xd0},
      {0x016e, 0x09},
      {0x016f, 0xa0},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x00},
      {0x0175, 0x00},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x0624, 0x0c},
      {0x0625, 0xd0},
      {0x0626, 0x09},
      {0x0627, 0xa0},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},

      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x0d},
      {0x0161, 0xc6},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x015a, 0x00},
      {0x015b, 0x31},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode3[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x0c},
      {0x30eb, 0x05},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x00},
      {0x0165, 0x00},
      {0x0166, 0x0c},
      {0x0167, 0xcf},
      {0x0168, 0x00},
      {0x0169, 0x00},
      {0x016a, 0x09},
      {0x016b, 0x9f},
      {0x016c, 0x0c},
      {0x016d, 0xd0},
      {0x016e, 0x09},
      {0x016f, 0xa0},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x00},
      {0x0175, 0x00},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x0624, 0x0c},
      {0x0625, 0xd0},
      {0x0626, 0x09},
      {0x0627, 0xa0},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},

      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x0d},
      {0x0161, 0xc6},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x015a, 0x00},
      {0x015b, 0x31},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode4[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x0c},
      {0x30eb, 0x05},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x00},
      {0x0165, 0x00},
      {0x0166, 0x0c},
      {0x0167, 0xcf},
      {0x0168, 0x00},
      {0x0169, 0x00},
      {0x016a, 0x09},
      {0x016b, 0x9f},
      {0x016c, 0x06},
      {0x016d, 0x68},
      {0x016e, 0x04},
      {0x016f, 0xd0},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x01},
      {0x0175, 0x01},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},

      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x05},
      {0x0161, 0x2a},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x015a, 0x00},
      {0x015b, 0x31},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode5[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x0c},
      {0x30eb, 0x05},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x00},
      {0x0165, 0x00},
      {0x0166, 0x0c},
      {0x0167, 0xcf},
      {0x0168, 0x01},
      {0x0169, 0x36},
      {0x016a, 0x08},
      {0x016b, 0x69},
      {0x016c, 0x06},
      {0x016d, 0x68},
      {0x016e, 0x03},
      {0x016f, 0x9a},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x01},
      {0x0175, 0x01},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},
      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x05},
      {0x0161, 0x2a},
      {0x0162, 0x0d},
      {0x0163, 0x78},
      {0x015a, 0x00},
      {0x015b, 0x31},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode6[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x05},
      {0x30eb, 0x0c},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x01},
      {0x0165, 0x68},
      {0x0166, 0x0b},
      {0x0167, 0x67},
      {0x0168, 0x02},
      {0x0169, 0x00},
      {0x016a, 0x07},
      {0x016b, 0x9f},
      {0x016c, 0x05},
      {0x016d, 0x00},
      {0x016e, 0x02},
      {0x016f, 0xd0},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x03},
      {0x0175, 0x03},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},
      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x02},
      {0x0161, 0x39},
      {0x0162, 0x0d},
      {0x0163, 0xe7},
      {0x015a, 0x00},
      {0x015b, 0x2f},
      {0x0100, 0x01},
};

struct sensor_regs imx219_mode7[] =
{
      {0x0100, 0x00},
      {0x30eb, 0x05},
      {0x30eb, 0x0c},
      {0x300a, 0xff},
      {0x300b, 0xff},
      {0x30eb, 0x05},
      {0x30eb, 0x09},
      {0x0114, 0x01},
      {0x0128, 0x00},
      {0x012a, 0x18},
      {0x012b, 0x00},
      {0x0164, 0x03},
      {0x0165, 0xe8},
      {0x0166, 0x08},
      {0x0167, 0xe7},
      {0x0168, 0x02},
      {0x0169, 0xf0},
      {0x016a, 0x06},
      {0x016b, 0xaf},
      {0x016c, 0x02},
      {0x016d, 0x80},
      {0x016e, 0x01},
      {0x016f, 0xe0},
      {0x0170, 0x01},
      {0x0171, 0x01},
      {0x0174, 0x03},
      {0x0175, 0x03},
      {0x018c, 0x0a},
      {0x018d, 0x0a},
      {0x0301, 0x05},
      {0x0303, 0x01},
      {0x0304, 0x03},
      {0x0305, 0x03},
      {0x0306, 0x00},
      {0x0307, 0x39},
      {0x0309, 0x0a},
      {0x030b, 0x01},
      {0x030c, 0x00},
      {0x030d, 0x72},
      {0x455e, 0x00},
      {0x471e, 0x4b},
      {0x4767, 0x0f},
      {0x4750, 0x14},
      {0x4540, 0x00},
      {0x47b4, 0x14},
      {0x4713, 0x30},
      {0x478b, 0x10},
      {0x478f, 0x10},
      {0x4793, 0x10},
      {0x4797, 0x0e},
      {0x479b, 0x0e},
      {0x0172, 0x03},
      {0x0157, 0x00},
      {0x0160, 0x02},
      {0x0161, 0x39},
      {0x0162, 0x0d},
      {0x0163, 0xe7},
      {0x015a, 0x00},
      {0x015b, 0x2f},
      {0x0100, 0x01},
};

struct mode_def imx219_modes[] = {
   { imx219_8MPix, NUM_ELEMENTS(imx219_8MPix), 3280, 2464, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2, 2504, 18904 },
   { imx219_mode1, NUM_ELEMENTS(imx219_mode1), 1920, 1080, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2, 1084, 18904 },
   { imx219_mode2, NUM_ELEMENTS(imx219_mode2), 3280, 2464, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2, 2468, 18904 },
   { imx219_mode3, NUM_ELEMENTS(imx219_mode3), 3280, 2464, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2, 2468, 18904 },
   { imx219_mode4, NUM_ELEMENTS(imx219_mode4), 1640, 1232, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2, 1236, 18904 },
   { imx219_mode5, NUM_ELEMENTS(imx219_mode5), 1640,  922, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2,  926, 18904 },
   { imx219_mode6, NUM_ELEMENTS(imx219_mode6), 1280,  720, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2,  724, 19517 },
   { imx219_mode7, NUM_ELEMENTS(imx219_mode7),  640,  480, 0, BAYER_ORDER_BGGR, 10, 0x2B, 2,  484, 19517 },
};

//From https://android.googlesource.com/kernel/bcm/+/android-bcm-tetra-3.10-lollipop-wear-release/drivers/media/video/imx219.c
struct sensor_regs imx219_stop[] = {
      /* to power down */
      {0x0100, 0x00},          /* disable streaming  */
};

// ID, exposure, and gain register settings taken from
// https://android.googlesource.com/kernel/bcm/+/android-bcm-tetra-3.10-lollipop-wear-release/drivers/media/video/imx219.c
// Flip settings taken from https://github.com/rellimmot/Sony-IMX219-Raspberry-Pi-V2-CMOS/blob/master/imx219mipiraw_Sensor.c#L585
struct sensor_def imx219 = {
      .name =                 "imx219",
      .modes =                imx219_modes,
      .num_modes =            NUM_ELEMENTS(imx219_modes),
      .stop =                 imx219_stop,
      .num_stop_regs =        NUM_ELEMENTS(imx219_stop),

      .i2c_addr =             0x10,
      .i2c_addressing =       2,
      .i2c_ident_length =     2,
      .i2c_ident_reg =        0x0000,
      .i2c_ident_value =      0x1902,     // 0x0219 bytes reversed

      .vflip_reg =            0x172,
      .vflip_reg_bit =        0,
      .hflip_reg =            0x172,
      .hflip_reg_bit =        1,

      .exposure_reg =         0x015A,
      .exposure_reg_num_bits = 16,

      .vts_reg =              0x0160,
      .vts_reg_num_bits =     16,

      .gain_reg =             0x0157,
      .gain_reg_num_bits =    8,    //Only valid up to 230.
};

#endif
