 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARAMCON_BADGE_2020_
#define _VARIANT_ARAMCON_BADGE_2020_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)
#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (28)
#define NUM_DIGITAL_PINS     (28)
#define NUM_ANALOG_INPUTS    (3)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (11)
#define PIN_NEOPIXEL         (10)

#define LED_BUILTIN          PIN_LED1

#define LED_RED              PIN_LED1
#define LED_BLUE             PIN_LED1

#define LED_STATE_ON         1         // State when LED is litted

// Buttons
#define PIN_BUTTON1          (31)    // Up Button
#define PIN_BUTTON2          (29)    // Left Button
#define PIN_BUTTON3          (45)    // Down Button
#define PIN_BUTTON4          (2)     // Right Button 
#define PIN_BUTTON5          (10)    // Action Button

// Vibration Motor
#define VIBRATION_MOTOR       4

/*
 * Analog pins
 */
#define PIN_A0               (12)
#define PIN_A1               (13)
#define PIN_A2               (14)


static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
#define ADC_RESOLUTION    14

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (0)
#define PIN_SERIAL1_TX       (1)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (21)
#define PIN_SPI_MOSI         (20)
#define PIN_SPI_SCK          (19)

static const uint8_t SS   = (0);
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA        (2)
#define PIN_WIRE_SCL        (3)

/*
 * QSPI Interfaces
 */
#define PIN_QSPI_SCK         22
#define PIN_QSPI_CS          23
#define PIN_QSPI_IO0         24
#define PIN_QSPI_IO1         25
#define PIN_QSPI_IO2         26
#define PIN_QSPI_IO3         27

// On-board QSPI Flash
#define EXTERNAL_FLASH_DEVICES   W25Q128JV_SQ
#define EXTERNAL_FLASH_USE_QSPI

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
