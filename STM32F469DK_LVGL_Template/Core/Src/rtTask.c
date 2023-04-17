/*
 * rtTask.c
 *
 *  Created on: Apr 14, 2023
 *      Author: developer
 */
#include "cmsis_os.h"

void RTTask(void const *argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */
}
