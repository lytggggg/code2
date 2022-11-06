#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"

uint8_t i;

int main(void)
{
	OLED_Init();
	PWM_Init1();
		PWM_Init2();

	while (1)
	{
		for (i = 0; i <= 100; i++)
		{
			
			PWM_SetCompare1(i);
			PWM_SetCompare2(i+50);
			Delay_ms(10);
		}
		for (i = 0; i <= 100; i++)
		{
			
			PWM_SetCompare1(100 - i);
			PWM_SetCompare2(50 - i);
			Delay_ms(10);
		}
		
	}
}
