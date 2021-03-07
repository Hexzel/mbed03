#include "mbed.h"

// Adjust pin name to your board specification.
// You can use LED1/LED2/LED3/LED4 if any is connected to PWM capable pin,
// or use any PWM capable pin, and see generated signal on logical analyzer.
PwmOut led(LED1);

int main()
{
   // led.period_ms(4000);         // 4 second period
   // led.write(0.50f);            // 50% duty cycle, relative to period
   
   led.period_ms(10);         // 4 second period
	while (1) {
		for (char i = 0; i < 100; i++) {
			led.write(float(i / 100.0));            // 50% duty cycle, relative to period
			ThisThread::sleep_for(100ms);
		}
	}
 
}
