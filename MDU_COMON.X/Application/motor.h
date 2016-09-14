

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef APPLICATION_H//XC_HEADER_TEMPLATE_H
#define	APPLICATION_H//XC_HEADER_TEMPLATE_H
#include "../Setting/types.h"
#include <stdint.h>
#include <stdbool.h>
//#include <xc.h> // include processor files - each processor file is guarded.  

void motor();
void set_motor_dt(int8_t);
void set_motor_speed(int32_t);
void set_p(float);
void set_i(float);
void set_d(float);

#endif	/* APPLICATION_H */

/*
 1.90   1  0.5
 1.80   1  0.25
 1.60   1  0.125
 1.20   1  0.0625
 0.40   0  0.03125
 0.80   0  0.015625
 1.60   1  0.0078125
 1.20   1  0.00390625
  //Q8_8_tの少数部の最大値  0.99609375
  //               
 */