/*
 * mainTask.c
 *
 *  Created on: Apr 14, 2023
 *      Author: developer
 */
#include "main.h"
#include "fatfs.h"
#include "stdint.h"
#include "stdbool.h"

bool sd_mounted = false;
bool sd_present = false;
void MainTask(void *argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
	for(;;)
	{
	//		if(HAL_GPIO_ReadPin(SD_DETECT_GPIO_Port, SD_DETECT_Pin)==GPIO_PIN_RESET)
	//		{
	//			if(sd_present==false)
	//			{
	//				sd_present=true;
	//				FRESULT res; /* FatFs function common result code */
	//				uint32_t byteswritten, bytesread; /* File write/read counts */
	//				uint8_t wtext[] = "STM32 FATFS works great!"; /* File write buffer */
	//				uint8_t rtext[_MAX_SS];/* File read buffer */
	//
	//				if(f_mount(&SDFatFS, (TCHAR const*)SDPath, 0) != FR_OK)
	//				{
	//					//Error_Handler();
	//				}
	//				else
	//				{
	//					if(f_mkfs((TCHAR const*)SDPath, FM_ANY, 0, rtext, sizeof(rtext)) != FR_OK)
	//					{
	//						//Error_Handler();
	//					}
	//					else
	//					{
	//						//Open file for writing (Create)
	//						if(f_open(&SDFile, "STM32.TXT", FA_CREATE_ALWAYS | FA_WRITE) != FR_OK)
	//						{
	//							//Error_Handler();
	//						}
	//						else
	//						{
	//
	//							//Write to the text file
	//							res = f_write(&SDFile, wtext, strlen((char *)wtext), (void *)&byteswritten);
	//							if((byteswritten == 0) || (res != FR_OK))
	//							{
	//								//Error_Handler();
	//							}
	//							else
	//							{
	//
	//								f_close(&SDFile);
	//							}
	//						}
	//					}
	//				}
	//				f_mount(&SDFatFS, (TCHAR const*)NULL, 0);
	//
	//			}
	//		}
	//		else
	//		{
	//			sd_present = false;
	//		}

    osDelay(10);
   }
  /* USER CODE END 5 */
}
