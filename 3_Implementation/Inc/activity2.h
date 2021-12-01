#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity2.h
 * @author Mohammad Karamathulla 40020717
 * @brief Header file for activity2
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * here Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * here Function Definitions
 */

/**
 * here brief Initialize the registers for ADC setup
 * 
 */
void InitADC();

/**
 * here brief Gives the ADC values for the selected channel
 * 
 * here param[in] ch Channel number from 0-7
 * here return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * here brief Return the ADC value to main function
 * 
 * here return uint16_t The ADC value
 */
uint16_t activity2_GetADC(void);

#endif /* __ACTIVITY_2_H__ */
