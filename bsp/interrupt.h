#ifndef __INTERRUPT_H__
#define __INTERRUPT_H__

#include "main.h"
#include "stdbool.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
struct keys{
	uchar keyMode;
	bool keyValue;
	bool keyJudge;
};

#endif
