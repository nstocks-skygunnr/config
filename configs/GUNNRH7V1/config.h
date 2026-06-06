/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU        STM32H743

#define BOARD_NAME           GUNNRH7V1
#define MANUFACTURER_ID      SKYG

// remove once timers + DMA are sorted out
#define USE_TIMER_MAP_PRINT

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_DPS310
#define USE_BARO_DPS368
#define USE_SDCARD
#define USE_MAX7456


#define USE_GYRO_CLKIN
#define GYRO_1_CLKIN_PIN     PA6
#define GYRO_2_CLKIN_PIN     PB0

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10
#define UART2_TX_PIN         PD5
#define UART2_RX_PIN         PD6
#define UART4_TX_PIN         PD1
#define UART4_RX_PIN         PD0
#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7
#define UART7_TX_PIN         PA15
#define UART7_RX_PIN         PA8
#define UART8_TX_PIN         PE1
#define UART8_RX_PIN         PE0

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB7
#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define LED0_PIN             PE6
#define LED1_PIN             PE7
#define LED2_PIN             PE8

#define SPI1_SDI_PIN         PB4
#define SPI1_SDO_PIN         PD7
#define SPI1_SCK_PIN         PB3

#define SPI2_SDI_PIN         PC2
#define SPI2_SDO_PIN         PC3
#define SPI2_SCK_PIN         PD3

#define SPI4_SDI_PIN         PE13
#define SPI4_SDO_PIN         PE14
#define SPI4_SCK_PIN         PE12

#define SDIO_CK_PIN          PC12
#define SDIO_CMD_PIN         PD2
#define SDIO_D0_PIN          PC8
#define SDIO_D1_PIN          PC9
#define SDIO_D2_PIN          PC10
#define SDIO_D3_PIN          PC11

#define ADC_VBAT_PIN         PA7
#define ADC_CURR_PIN         PC5
//#define ADC_EXTERNAL1_PIN    PC4    // Airspeed

#define SDCARD_DETECT_PIN    NONE 
#define SDIO_DEVICE          SDIODEV_1
#define SDIO_USE_4BIT        1
#define DEFAULT_BLACKBOX_DEVICE    BLACKBOX_DEVICE_SDCARD

#define PINIO1_PIN           PE2	// J5 PIN6
#define PINIO2_PIN           PE3    // J5 PIN7
#define PINIO3_PIN           PD10    // Camera Select
#define PINIO4_PIN           PD11    // V10P0 EN

#define MAX7456_SPI_CS_PIN   PD4    // SPI4_NSS

#define GYRO_1_EXTI_PIN      PB5   // ICM-42688-P INT
#define GYRO_1_CS_PIN        PB2    // ICM-42688-P SPI6_NSS

#define GYRO_2_EXTI_PIN      PB1   // ICM-45686 INT
#define GYRO_2_CS_PIN        PE15   // ICM-45686 SPI3_NSS

/*
    PE9  - TIM1_CH1
    PE11 - TIM1_CH2
    PA0  - TIM2_CH1
    PA1  - TIM2_CH2
    PA2  - TIM2_CH3
    PA3  - TIM2_CH4
    PA6  - TIM3_CH1
    PB5  - TIM3_CH2
    PB0  - TIM3_CH3
    PB1  - TIM3_CH4
    PD12 - TIM4_CH1
    PD13 - TIM4_CH2
    PD14 - TIM4_CH3
    PD15 - TIM4_CH4
    PB14 - TIM12_CH1
    PE5  - TIM15_CH1
*/

// ESC1 - TIM2
#define MOTOR1_PIN           PA0
#define MOTOR2_PIN           PA1
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PA3

// ESC2 - TIM4
#define MOTOR5_PIN           PD12
#define MOTOR6_PIN           PD13
#define MOTOR7_PIN           PD14
#define MOTOR8_PIN           PD15

// Servo Pins - TIM1
#define SERVO1_PIN           PE9
#define SERVO2_PIN           PE11

// others
#define BEEPER_PIN           PB14
#define LED_STRIP_PIN        PE5 

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0,  MOTOR1_PIN,       1, 0 ) \
    TIMER_PIN_MAP( 1,  MOTOR2_PIN,       1, 1 ) \
    TIMER_PIN_MAP( 2,  MOTOR3_PIN,       1, 2 ) \
    TIMER_PIN_MAP( 3,  MOTOR4_PIN,       1, 3 ) \
    TIMER_PIN_MAP( 4,  MOTOR5_PIN,       1, 4 ) \
    TIMER_PIN_MAP( 5,  MOTOR6_PIN,       1, 5 ) \
    TIMER_PIN_MAP( 6,  MOTOR7_PIN,       1, 6 ) \
    TIMER_PIN_MAP( 7,  MOTOR8_PIN,       1, 7 ) \
    TIMER_PIN_MAP( 8,  SERVO1_PIN,	 1, -1) \
    TIMER_PIN_MAP( 9,  SERVO2_PIN,	 1, -1) \
    TIMER_PIN_MAP( 10, LED_STRIP_PIN,	 1, 14) \
    TIMER_PIN_MAP( 11, BEEPER_PIN,       2, -1)

#define ADC1_DMA_OPT		9
//#define ADC3_DMA_OPT       	10
#define TIMUP3_DMA_OPT     	11
#define TIMUP4_DMA_OPT     	12
//#define TIMUP5_DMA_OPT     	13

#define MAG_I2C_INSTANCE		I2CDEV_1
#define BARO_I2C_INSTANCE               I2CDEV_2

#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE     85
#define DEFAULT_VOLTAGE_METER_SCALE     180
#define BEEPER_INVERTED

//#define DEFAULT_GYRO_TO_USE		GYRO_CONFIG_USE_GYRO_1
//#define DEFAULT_GYRO_TO_USE		GYRO_CONFIG_USE_GYRO_2
#define DEFAULT_GYRO_TO_USE 		GYRO_CONFIG_USE_GYRO_BOTH
#define GYRO_1_SPI_INSTANCE             SPI1
#define GYRO_1_ALIGN                    CW0_DEG
#define GYRO_2_SPI_INSTANCE             SPI4
#define GYRO_2_ALIGN                    CW270_DEG

#define MAX7456_SPI_INSTANCE            SPI2

#define PINIO1_CONFIG		1
#define PINIO1_BOX              40
#define BOX_USER1_NAME          "USER A"
#define PINIO2_CONFIG           1
#define PINIO2_BOX              41
#define BOX_USER2_NAME          "USER B"
#define PINIO3_CONFIG           1
#define PINIO3_BOX              42
#define BOX_USER3_NAME          "CAM SEL"
#define PINIO4_CONFIG           1
#define PINIO4_BOX              43
#define BOX_USER4_NAME          "10V EN"

// user config defaults to match our design
#define DEFAULT_RX_FEATURE	FEATURE_RX_SERIAL
#define SERIALRX_UART		SERIAL_PORT_USART6

