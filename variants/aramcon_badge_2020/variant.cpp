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

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // D0 .. D11
  4,   // D0  is P0.04 (GPIO D0 / A1 / GPIO01)
  5,   // D1  is P0.05 (GPIO D1 / A2 / GPIO02)
  3,   // D2  is P0.03 (GPIO D2 / SDA)
  28,  // D3  is P0.28 (GPIO D3 / SCL)
  17,  // D4  is P0.17 (GPIO D4 / Vibration Motor)
  31,  // D5  is P0.31 (GPIO D5 / Up Button)
  29,  // D6  is P0.29 (GPIO D6 / Left Button)
  45,  // D7  is P1.13 (GPIO D7 / Down Button)
  2,   // D8  is P0.02 (GPIO D8 / Right Button)
  10,  // D9  is P0.10 (GPIO D9 / Action Button)
  8,   // D10 is P0.08 (GPIO D10 / NeoPixels)
  43,  // D11 is P1.11 (GPIO D11 / Red LED)

  // D12 .. D14
  30,  // A0 - Battery Sense
  4,   // D0  is P0.04 (GPIO D0 / A1 / GPIO01)
  5,   // D1  is P0.05 (GPIO D1 / A2 / GPIO02)

  // Display
  26,  // D15 is P0.26 (Display BUSY)
  7,   // D16 is P0.07 (Display CS)
  12,  // D17 is P0.12 (Display DC)
  6,   // D18 is P0.06 (Display Reset)

  // SPI bus
  1,   // D19 is P0.01 (SPI SCK)
  42,  // D20 is P1.10 (SPI MOSI)
  41,  // D21 is P1.09 (SPI MISO)

  // QSPI pins (not exposed via any header / test point)
  32,  // D22 is P1.00 (QSPI CLK)
  34,  // D23 is P1.02 (QSPI CS)
  22,  // D24 is P0.22 (QSPI Data 0)
  20,  // D25 is P0.20 (QSPI Data 1)
  36,  // D26 is P1.04 (QSPI Data 2)
  38,  // D27 is P1.06 (QSPI Data 3)
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

