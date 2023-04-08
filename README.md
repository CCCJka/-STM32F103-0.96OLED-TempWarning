跟着江科大自化协学了STM32，跟着做了点小项目，主要是增加了DS18B20的代码获取温度<br/>
接口方面：<br/>
OLED：<br/>
+ SCK:PB8
+ SDA:PB9<br/>
蜂鸣器:<br/>
+ PA1<br/>
DS18B20:<br/>
+ PA0<br/>
直流电机:<br/>
+ 接在TB6612FNG电机驱动模块的AO1,AO2口上<br/>
TB6612FNG电机驱动模块:<br/>
+ VM接5V电流
+ PWMA接PA2
+ AIN2接PA5
+ AIN1接PA4
+ STBY接正电流
以上就是所有的接口了
