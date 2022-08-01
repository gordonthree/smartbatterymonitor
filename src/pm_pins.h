#include <Arduino.h>

#ifdef MCU_ATMEGA328P
#define LED1 PD2
#define LED2 PD3
#define LED3 PD4
#define LED4 PD5

//SDA 18 (A4) SCL 19 (A5)
#define SCL PC5 // A5
#define SDA PC4 // A4

#define ADC0 A0
#define ADC1 A2
#define ADC2 A2
#elif MCU_NANOEVERY
#define LED1 PF2
#define LED2 PF3
#define LED3 PF4
#define LED4 PF5

// Nano Every: SDA 4 SCL 5 
#define SCL PA3 
#define SDA PA2 
#elif MCU_ATMEGA4808
#define LED1 PF2
#define LED2 PF3
#define LED3 PF4
#define LED4 PF5

// Nano Every: SDA 4 SCL 5 
#define SCL PA3 
#define SDA PA2 
#elif MCU_ATMEGA4809
#define LED1 PB2
#define LED2 PC6
#define LED3 PF5
#define LED4 PA0

// Nano Every: SDA 4 SCL 5 
#define SCL PA3 
#define SDA PA2 
#endif