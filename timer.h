                                //timer.h�м����TIM3_PWM_Init������//
#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"
void TIM3_Int_Init(u16 arr,u16 psc);
void TIM3_PWM_Init(u16 arr,u16 psc);
#endif
