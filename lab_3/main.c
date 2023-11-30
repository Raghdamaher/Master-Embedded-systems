/**
 ******************************************************************************
 * @file           : main.c
 * @author         : raghda maher
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include<stdint.h>
#include<stdio.h>
#define SYSCTL_RCGC2_R (*((unsigned long int *)0x400FE108))
#define GPIO_PORTF_DATA_R (*((unsigned long int *)0x400253FC))
#define GPIO_PORTF_DIR_R (*((unsigned long int *)0x40025400))
#define GPIO_PORTF_DEN_R (*((unsigned long int *)0x4002551c))
int main()
{

	volatile unsigned long  i=0;
	SYSCTL_RCGC2_R=0x00000020;
	for(i=0;i<2000;i++);
	GPIO_PORTF_DIR_R|=1<<3;
	GPIO_PORTF_DEN_R|=1<<3;
	while(1)
	{
		GPIO_PORTF_DATA_R|=1<<3;
	for(i=0;i<200000;i++);
	GPIO_PORTF_DATA_R&=~(1<<3);
	for(i=0;i<200000;i++);
	}
	
	return 0;
}