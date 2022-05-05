                                //timer.h中加入对TIM3_PWM_Init的申明//
#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"
void TIM3_Int_Init(u16 arr,u16 psc);
void TIM3_PWM_Init(u16 arr,u16 psc);
#endif
