/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_CS_2_Pin GPIO_PIN_1
#define SPI1_CS_2_GPIO_Port GPIOA
#define SPI1_CS1_Pin GPIO_PIN_4
#define SPI1_CS1_GPIO_Port GPIOA
#define OUT_M12_Pin GPIO_PIN_7
#define OUT_M12_GPIO_Port GPIOC
#define OUT_M11_Pin GPIO_PIN_8
#define OUT_M11_GPIO_Port GPIOC
#define OUT_M10_Pin GPIO_PIN_9
#define OUT_M10_GPIO_Port GPIOC
#define OUT_M02_Pin GPIO_PIN_8
#define OUT_M02_GPIO_Port GPIOA
#define OUT_M01_Pin GPIO_PIN_9
#define OUT_M01_GPIO_Port GPIOA
#define OUT_M00_Pin GPIO_PIN_10
#define OUT_M00_GPIO_Port GPIOA
#define MPL_TEMP_2_3V3_Pin GPIO_PIN_5
#define MPL_TEMP_2_3V3_GPIO_Port GPIOB
#define MPL_TEMP_1_3V3_Pin GPIO_PIN_6
#define MPL_TEMP_1_3V3_GPIO_Port GPIOB
#define MPL_TEMP_0_3V3_Pin GPIO_PIN_7
#define MPL_TEMP_0_3V3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
