#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity3.h
 * @author Mohammad Karamathulla 40020717
 * @brief Header file for activity3
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define PWM_20_PERCENT (205) /**< here Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< here Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< here Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< here Output PWM for 95% duty cycle */

/**
 * here Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * here Function Definitions
 */

/**
 * here brief Initialize Timer1 registers 
 * 
 */
void InitTimer();

/**
 * here brief Produce duty cycle in PWM according to i/p ADC value
 * 
 * here param[in] temp The ADC value from activity2
 */
void activity3_PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
