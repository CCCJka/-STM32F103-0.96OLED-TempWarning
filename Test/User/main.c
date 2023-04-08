#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "temp.h"
#include "delay.h"
#include "Buzzer.h"
#include "Motor.h"
int main(void)
{
	short temperature;
	OLED_Init();
	DS18B20_Init();
	Buzzer_Init();
	Motor_Init();
	OLED_ShowString(1,1,"Temp:  . C");
	
	while(1)
	{
		temperature=DS18B20_Get_Temp();
		OLED_ShowNum(1,6,temperature/10-1,2);			//除以10相差1度左右，所以-1度
		OLED_ShowNum(1,9,temperature%10,1);
		if(temperature/10 > 28){
			OLED_ShowString(2,1,"HOT ");
			Buzzer_SetBits();
			Motor_SetSpeed(50);	
		}else{
			OLED_ShowString(2,1,"COOL");
			Buzzer_ResetBits();
			Motor_SetSpeed(0);	
		}
		
	}
}
