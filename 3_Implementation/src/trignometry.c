#include <trignometry.h>
void trig(){
    int choose;
    float degree=0,tempt=0;
    
    
        printf("chooose trigonometric operation\n");
        printf("1.Sine\n2.cosine\n3.Tangent\n4.cotangent\n5.Sec\n6.Cosec\n7.back to main menu\n ");

        scanf("%d",&choose);
        printf("Enter angle value\n");
        scanf("%f",&degree);
        tempt=0.0174533*degree;
        switch(choose)
        {
        case 1:
            sin_angle(tempt);
            break;
        case 2:
            cos_angle(tempt);
            break;
        case 3:
            tan_angle(tempt);
            break;
        case 4:
            cot_angle(tempt);
            break;
        case 5:
            sec_angle(tempt);
            break;
        case 6:
            cosec_angle(tempt);
            break;
        default:
           printf("Choose correct operation\n");
            break;
        }
    
}



float sin_angle(float tempt)
{
      printf("\n%lf\n",sin(tempt));
    return sin(tempt);
  
}

float cos_angle(float tempt)
{
      printf("\n%lf\n",cos(tempt));
    return cos(tempt);
  
}

float tan_angle(float tempt)
{
      printf("\n%lf\n",tan(tempt));
    return tan(tempt);
  
}


float cot_angle(float tempt)
{
      printf("\n%lf\n",1.0/tan(tempt));
    return 1.0/tan(tempt);
  
}
float cosec_angle(float tempt)
{
      printf("\n%lf\n",1.0/sin(tempt));
    return 1.0/sin(tempt);
  
}


float sec_angle(float tempt)
{
      printf("\n%lf\n",1.0/cos(tempt));
    return 1.0/cos(tempt);
  
}
