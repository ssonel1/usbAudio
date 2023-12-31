/**
  ******************************************************************************
  * @file    cube_hal.h
  * @author  SRA
  * @version v1.3.0
  * @date    17-Sep-2021
  * @brief   X-CUBE includes file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  *
  ******************************************************************************
  */

#ifndef _CUBE_HAL_H_
#define _CUBE_HAL_H_

/* Includes ------------------------------------------------------------------*/
#define USB_IRQHandler OTG_FS_IRQHandler
#include "stm32f4xx_hal.h"
#include "stm32f4xx.h"
#include "stm32f4xx_it.h"
//#include "stm32f4xx_nucleo.h"		//kapatıldı
#include "usbd_core.h"
#include "usbd_desc.h"
#include "usbd_audio_in.h"
#include "usbd_audio_if.h"
//#include "audio_application.h"	//kapatıldı
//#include "cca02m2_audio.h"		//kapatıldı


#define DISABLE_USB_DRIVEN_ACQUISITION
void SystemClock_Config(void);

#endif //_CUBE_HAL_H_
