#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file activity1.h
 * @author Mohammad Karamathulla 40020717
 * @brief Header file for activity1
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**<  here set LED Port Number */
#define LED_PIN  (PORTD2)   /**< here set LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< here set Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< here set Port for Temperature Sensor   */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Here Function Definitions
 */

/**
 * here brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * here brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * here brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * here brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H__ */
