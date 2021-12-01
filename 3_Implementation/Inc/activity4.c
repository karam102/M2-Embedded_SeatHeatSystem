#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity4.h
 * @author Mohammad Karamathulla 40020717
 * @brief Header file for activity4
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */

/**
 * here Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 *here Function Definitions
 */

/**
 * here brief Setting Baud rate and Enabling Rx and Tx 
 * 
 */
void USARTInit();

/**
 * here brief Reading data
 * 
 * here return int The read data
 */
int USARTRead();

/**
 * here brief Writing data to view in serial monitor
 * 
 * here param[in] temp The ADC value
 */
void activity4_USARTWrite(uint16_t temp);

#endif /* __ACTIVITY_4_H__ */
