/*
* Copyright (C) 2020 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Auto-generated file for BMP180 v0.1.0.
* Generated from peripherals/BMP180.yaml using Cyanobyte Codegen v0.1.0
* Class for BMP180
* Bosch Digital Temperature / Pressure Sensor

*/

#ifndef _BMP180_H_
#define _BMP180_H_

#include <math.h>


int bmp180_init(int (*connect)(uint8_t));
   

/**
 * Register stores what the measurement type should be

 */
int bmp180_writeControl(
    uint8_t* data,
    int (*read)(uint8_t, uint8_t, uint8_t*, uint8_t),
    int (*write)(uint8_t, uint8_t, uint8_t*, uint8_t)
);
/**
  * For calibration

*/
int bmp180_readPressureCalAC1(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readPressureCalAC2(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readPressureCalVB1(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readPressureCalVB2(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * Register stores most recent measurement result

*/
int bmp180_readResult(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCal3(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCal4(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCal5(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCal6(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCalMC(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);

/**
  * For calibration

*/
int bmp180_readTempCalMD(
    uint16_t* val,
    int (*read)(uint8_t, uint8_t, uint16_t*, uint8_t)
);


/**
 * Reads the temperature

*/
void bmp180_temperature_ascelsius(
    float* val,
    int (*read)(uint8_t, uint8_t, int*, uint8_t),
    int (*write)(uint8_t, uint8_t, int*, uint8_t)
);


#endif