/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _LILYGO_NRF52840_H
#define _LILYGO_NRF52840_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

// When board is supplied on VDDH (and not VDD), this specifies what voltage the GPIO should run at
// and what voltage is output at VDD. The default (0xffffffff) is 1.8V; typically you'll want
//     #define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3
// in board.h when using that power configuration.
#define UICR_REGOUT0_VALUE    UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           2
#define LED_PRIMARY_PIN       _PINNUM(0, 13)
#define LED_SECONDARY_PIN     _PINNUM(0, 14)
#define LED_STATE_ON          0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_DFU            _PINNUM(1, 10)
#define BUTTON_FRESET         _PINNUM(0, 18)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "LilyGo nRF52840 ePaper"
#define BLEDIS_MODEL          "LilyGo-nRF52840-ePaper-v1"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x002A

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "LilyGo nRF52840 ePaper"
#define UF2_BOARD_ID          "LilyGo nRF52840 ePaper"
#define UF2_INDEX_URL         "http://www.lilygo.cn/"
// #define UF2_VOLUME_LABEL      "FTHR840BOOT"

#endif // _LILYGO_NRF52840_H
