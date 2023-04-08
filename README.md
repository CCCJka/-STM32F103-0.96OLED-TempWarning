跟着江科大自化协学了STM32，跟着做了点小项目，主要是增加了DS18B20的代码获取温度
接口方面：
OLED：
+ SCK:PB8
+ SDA:PB9
蜂鸣器:
+ PA1
DS18B20:
+ PA0
直流电机:
+ 接在TB6612FNG电机驱动模块的AO1,AO2口上
TB6612FNG电机驱动模块:
+ VM接5V电流
+ PWMA接PA2
+ AIN2接PA5
+ AIN1接PA4
+ STBY接正电流
