/*
 * mainTask.c
 *
 *  Created on: Apr 14, 2023
 *      Author: developer
 */
#include "main.h"
#include "fatfs.h"
#include "usbh_diskio.h"
#include "stdint.h"
#include "stdbool.h"
#include "usb_host.h"

bool sd_mounted = false;
bool sd_present = false;

void HAL_Delay(uint32_t Delay)
{
	osDelay(1);
}

void MainTask(void const *argument)
{

  /* USER CODE BEGIN 5 */

	MX_USB_HOST_Init();

	/* Infinite loop */
	while(1)
	{

		MX_USB_HOST_Process();
		osDelay(1);
	}
  /* USER CODE END 5 */
}
