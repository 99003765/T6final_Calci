#ifndef __BMI_H__
#define __BMI_H__
#include<stdio.h>
typedef enum{
underwt,
normalwt,
overwt,
obesity
}bmi_t;
bmi_t bmicon(int h,int w);

#endif
