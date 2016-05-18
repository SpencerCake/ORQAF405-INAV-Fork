/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TARGET_BOARD_IDENTIFIER "CC3D" // CopterControl 3D

#define LED0_GPIO   GPIOB
#define LED0_PIN    Pin_3 // PB3 (LED)
#define LED0_PERIPHERAL RCC_APB2Periph_GPIOB
#define LED0

#define INVERTER_PIN Pin_2 // PB2 (BOOT1) used as inverter select GPIO
#define INVERTER_GPIO GPIOB
#define INVERTER_PERIPHERAL RCC_APB2Periph_GPIOB
#define INVERTER_USART USART1

#define BEEP_GPIO GPIOA
#define BEEP_PIN Pin_15 // PA15 (Beeper)
#define BEEP_PERIPHERAL RCC_APB2Periph_GPIOA

#define MPU6000_CS_GPIO       GPIOA
#define MPU6000_CS_PIN        GPIO_Pin_4
#define MPU6000_SPI_INSTANCE  SPI1

#define M25P16_CS_GPIO        GPIOB
#define M25P16_CS_PIN         GPIO_Pin_12
#define M25P16_SPI_INSTANCE   SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USABLE_TIMER_CHANNEL_COUNT 12

//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL

#define GYRO
#define USE_GYRO_SPI_MPU6000

#define GYRO_MPU6000_ALIGN CW270_DEG

#define ACC
#define USE_ACC_SPI_MPU6000

#define ACC_MPU6000_ALIGN CW270_DEG

// External I2C BARO
#define BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP085

// External I2C MAG
#define MAG
#define USE_MAG_HMC5883
#define USE_MAG_AK8975
#define USE_MAG_MAG3110

#define INVERTER
#define BEEPER

#define USE_VCP
#define USE_USART1
#define USE_USART3
#define USE_SOFTSERIAL1
#define SERIAL_PORT_COUNT 4

#define SOFTSERIAL_1_TIMER TIM3
#define SOFTSERIAL_1_TIMER_TX_HARDWARE 1 // PWM 2
#define SOFTSERIAL_1_TIMER_RX_HARDWARE 2 // PWM 3

#define USART3_RX_PIN Pin_11
#define USART3_TX_PIN Pin_10
#define USART3_GPIO GPIOB
#define USART3_APB1_PERIPHERALS RCC_APB1Periph_USART3
#define USART3_APB2_PERIPHERALS RCC_APB2Periph_GPIOB

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define USE_I2C
#define I2C_DEVICE (I2CDEV_2) // Flex port - SCL/PB10, SDA/PB11

#define USE_ADC

#define CURRENT_METER_ADC_GPIO      GPIOB
#define CURRENT_METER_ADC_GPIO_PIN  GPIO_Pin_1
#define CURRENT_METER_ADC_CHANNEL   ADC_Channel_9

#define VBAT_ADC_GPIO               GPIOA
#define VBAT_ADC_GPIO_PIN           GPIO_Pin_0
#define VBAT_ADC_CHANNEL            ADC_Channel_0

#define RSSI_ADC_GPIO               GPIOA
#define RSSI_ADC_GPIO_PIN           GPIO_Pin_1
#define RSSI_ADC_CHANNEL            ADC_Channel_1

#define GPS
#define GPS_PROTO_NMEA
#define GPS_PROTO_UBLOX
#define GPS_PROTO_I2C_NAV
#define GPS_PROTO_NAZA

#define NAV
//#define NAV_AUTO_MAG_DECLINATION
#define NAV_GPS_GLITCH_DETECTION

//#define LED_STRIP
//#define LED_STRIP_TIMER TIM3

#define BLACKBOX
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define TELEMETRY
//#define TELEMETRY_FRSKY
//#define TELEMETRY_HOTT
//#define TELEMETRY_SMARTPORT
#define TELEMETRY_LTM

#define SONAR
#define USE_SONAR_SRF10
#define SONAR_TRIGGER_PIN           Pin_5   // (PB5)
#define SONAR_TRIGGER_GPIO          GPIOB
#define SONAR_ECHO_PIN              Pin_0   // (PB0) - only 3.3v ( add a 1K Ohms resistor )
#define SONAR_ECHO_GPIO             GPIOB
#define SONAR_EXTI_LINE             EXTI_Line0
#define SONAR_EXTI_PIN_SOURCE       GPIO_PinSource0
#define SONAR_EXTI_IRQN             EXTI0_IRQn

#define SERIAL_RX
#define USE_SERVOS
#define USE_CLI

//#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define SPEKTRUM_BIND
// USART3, PB11 (Flexport)
#define BIND_PORT  GPIOB
#define BIND_PIN   Pin_11

//Disables uncommon predefined mixer settings like BiCopter, H6 and similar exotics

#ifdef CC3D_OPBL
#define USE_QUAD_MIXER_ONLY
#undef USE_SERVOS
#undef TELEMETRY
#undef TELEMETRY_LTM
#undef SERIAL_RX
//#define SKIP_RX_MSP
#endif

// DEBUG
//#define HIL
//#define USE_FAKE_MAG
//#define USE_FAKE_BARO
//#define USE_FAKE_GPS
