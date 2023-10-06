#include "stm32f4xx_hal_gpio.h"
#include "Pin_Mode_Names.h"

#ifndef __STM32_WRAPPER_GPIO_H
#define __STM32_WRAPPER_GPIO_H

#ifdef __cplusplus
extern "C" {
#endif


/* ---------  Common Functions ---------- */

/*  Get the GPIOx From PinName  */
static GPIO_TypeDef* get_gpio_port (PinName pin);



/* =======================================*/
/* 		 Functions For PinAsInput Class --- */
/*----------------------------------------*/
	
void gpio_init_in_def(PinName pin);	
	
void gpio_init_in(PinName pin, PinInMode mode);

static void _gpio_init_in(PinName pin, PinInMode mode );

int gpio_read (PinName thepin);	
	

	
/*=============================================*/
/* ------  Functions For xxPinAsOutput Class --*/
/*---------------------------------------------*/
void gpio_init_out_def(PinName pin);
	
void gpio_init_out (PinName pin, PinOutMode mode);
	
void gpio_init_out_ex (PinName pin, PinOutMode mode, PinSpeed speed);
	
static void _gpio_init_out(PinName pin, PinOutMode mode, PinSpeed speed);

void gpio_write(PinName pin, int value);

int gpio_read_out(PinName pin);




	


#ifdef __cplusplus
}
#endif


#endif //__STM32_WRAPPER_GPIO_H
