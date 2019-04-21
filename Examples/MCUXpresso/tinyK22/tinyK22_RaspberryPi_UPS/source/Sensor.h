/*
 * Sensor.h
 *
 *  Created on: 14.10.2018
 *      Author: Erich Styger
 */

#ifndef SOURCES_SENSOR_H_
#define SOURCES_SENSOR_H_

#include <stdint.h>

float SENSOR_GetTemperature(void);
float SENSOR_GetHumidity(void);

void SENSOR_Init(void);
void SENSOR_Deinit(void);

#endif /* SOURCES_SENSOR_H_ */
