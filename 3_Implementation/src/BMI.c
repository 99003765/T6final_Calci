#include "BMI.h"
bmi_t bmicon(int h,int w)
{
    int answer;
    int squ=w*w;
    answer=h/squ;
    if(answer<18)
    {
        return underwt;

    }
    else if (answer<24)
    {
        /* code */
        return normalwt;
    }
    else if(answer<29)
    {
        return overwt;

    }
    else
    {
        return obesity;

    }
}
