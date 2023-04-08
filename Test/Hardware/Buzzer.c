#include "stm32f10x.h"                  // Device header

void Buzzer_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;		//推挽
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;	
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);								//GPIOA
}

void Buzzer_SetBits(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_1);
}

void Buzzer_ResetBits(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}
