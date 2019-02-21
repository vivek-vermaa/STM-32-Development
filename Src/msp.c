/*
 * msp.c
 *
 *  Created on: 21-Feb-2019
 *      Author: Vivek Verma
 */

#include "stm32f4xx_hal.h"

void HAL_MSP_INIT()
{
	HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);
}
