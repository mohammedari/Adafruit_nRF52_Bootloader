/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Kazuyuki Arimatsu
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

#ifndef _SPLIT_LOGIC_BOARD_BLE_H_
#define _SPLIT_LOGIC_BOARD_BLE_H_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/

//TODO
#define LEDS_NUMBER       1
#define LED_PRIMARY_PIN   _PINNUM(0, 15)
#define LED_STATE_ON      1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    2  // not wired outside of MS88SF2
#define BUTTON_1          _PINNUM(1, 1)
#define BUTTON_2          _PINNUM(1, 2)
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "Kazuyuki Arimatsu"
#define BLEDIS_MODEL         "Split Logic Board BLE"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x4B41 //KA
#define USB_DESC_UF2_PID       0x5453 //TS
#define USB_DESC_CDC_ONLY_PID  0x5453 //TS

#define UF2_PRODUCT_NAME  "Split Logic Board BLE"
#define UF2_VOLUME_LABEL  "SLBBLE"
#define UF2_BOARD_ID      "split-logic-board-ble"
#define UF2_INDEX_URL     "http://mohammedari.blogspot.com/"

#endif // _SPLIT_LOGIC_BOARD_BLE_H_
