/*
 * gfxTask.c
 *
 *  Created on: Apr 14, 2023
 *      Author: developer
 */
#include "ui.h"

void GfxTask(void *argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    lv_timer_handler();
    osDelay(5);
  }
  /* USER CODE END 5 */
}
