#include <Conversion.h>

void conversion()
{
    int P,n,z;
    float C, F, K, T, R, D, Pn, Currency;
    float num;

    printf("Choose the conversion option\n");
    printf(" 1- Temperature conversion\n");
    printf(" 2- Currency conversion \n");
    printf(" Enter the option: ");
    scanf("%d", &n);


    if(n==1)

    {

        printf("<<<<   Temparature Conversion options   >>>>\n");
        printf("       1- Celsius to Kelvin       \n");
        printf("       2- Kelvin to Celsius       \n");
        printf("       3- Kelvin to Fahrenheit       \n");
        printf("       4- Fahrenheit to Kelvin       \n");
        printf("       5- Fahrenheit to Celsius       \n");
        printf("       6- Celsius to Fahrenheit       \n");
        printf("Please enter the option: ");
        scanf("%d", &P);


        switch(P)
         {

             
        case 1:
                printf("Enter Temparature in Celsius: ");
                scanf("%f", &num);
                  Celsius(num);//calling function
                
                break;
             

             
             
        case 2:

                printf("Enter the Temperature in Kelvin: ");
                scanf("%f", &num);
                  Kelvin(num);

                break;
             
        
        
        case 3:
                printf("Enter the temperature in Kelvin: ");
                scanf("%f", &num);
                Kelvin_F(num);

                break;
        

        
        case 4:
                printf("Enter the Temperature in Fahrenheit: ");
                scanf("%f", &num);
                F_K(num);
                
                break;

        case 5:
                printf("Enter the Temperature in Fahrenheit: ");
                scanf("%f", &num);
                F_C(num);
                
                break;

        case 6:

                    printf("Enter the Temperature Celsius: ");
                    scanf("%f", &num);  
                    C_F(num);
                break;       
        }
    }

else
    {
        printf("<<<<   Currency conversion option   >>>>\n");
        printf("     1- INR to Dollar     \n");
        printf("     2- Dollar to INR     \n");
        printf("     3- INR to pounds     \n");
        printf("     4- Pounds to INR     \n");
        printf("     5- Dollar to Pounds      \n");
        printf("     6- Pounds to Dollars     \n");
        printf("Please enter the option: ");
        scanf("%d", &z);

        switch(z)
        {

        case 1:
                printf("Enter the INR value: ");
                scanf("%f", &num);
                I_D(num);
                break; 

        case 2:
                printf("Enter the amount in dollar: ");
                scanf("%f", &num);
                D_I(num);
                
                break;
        case 3:
                printf("Enter the Amount in INR: ");
                scanf("%f", &num);
                I_P(num);


                
                break;
        case 4:
                printf("Enter the Amount in Pounds: ");
                scanf("%f", &num);
                P_I(num);
                
                break;

        case 5:
                printf("Enter the amount in Dollar: ");
                scanf("%f", &num);
                D_P(num);

                
                break;

        case 6:
                printf("Enter the value in pounds: ");
                scanf("%f", &num);
                P_D(num);

                
                break;        
        }
    }
   // return 0;
}
float Celsius(float A)
{
    float convert;
             if(A>=-273.15)
                {
                   convert= (A+ 273.15);
                     printf("Temperature in Kelvin is: %f K\n",convert);
                }
                else
                {

                    printf("Not defined");
                }
                return convert;
}

float Kelvin(float B)
{
    float convert;
    if(B>=0)
                {
                    convert=(B-273.15);
                    printf("Temperature in Celsius is: %f C\n", convert);
                }
                else{
                    printf("Not defined");
                }
                    return convert;
}

float Kelvin_F(float C)
{
    float convert;
    if(C>=0)
                {
                    convert=(C*(9/5)-459.67);
                    printf("Temperature in Fahrenheit is: %f F\n", convert);
                }
                 else{
                    printf("Not defined");
                 }
                    return convert;
}
float F_K(float D)
{
    float convert;
    if(D>=-459.67)
                {
                    convert=273.15+ ((D-32)*(9/5));
                    printf("Temperature in Kelvin is: %f K\n", convert);
                }
                else{
                    printf("Not defined");
                }
                    return convert;
}
float F_C(float E)
{
    float convert;
    if(E>=-459.67)
                {
                    convert= ((E-32)*(5/9));
                    printf("Temperature in Celsius: %f C\n", convert);
                }
                else{
                    printf("Not defined");
                }
                    return convert;
}
float C_F(float G)
{
    float convert;
    if(G>=-273.15)
                {   
                    convert= ((9/5)*G+32);
                    printf("Temperature in Fahrenheit: %f F\n", convert);
                }
                else{
                    printf("Not defined");
                }

                    return convert;

}

float I_D(float Z)
{
    float convert;
    if(Z>=0)
                {
                    convert= Z*0.014;
                    printf("Amount in dollar= %f $\n", convert);
                }
                else
                {
                    printf("Not defined");
                }
                    return convert;
}

float D_I(float y)
{
    float convert;
    if(y>=0)
                {
                    convert= y/0.014;
                    printf("Amount in INR= %f \n", convert);
                }
                else
                {
                    printf("Not defined");
                }
                return convert;
                    
}

float I_P(float x)
{
    float convert;
    if(x>=0)
                {
                    convert= x*0.01;
                    printf("Amount in pounds= %f \n", convert);
                }
                else{
                    printf("Not defined");
                }
                return convert;
}

float P_I(float w)
{
    float convert;
    if(w>=0)
                {
                    convert= w/0.01;
                    printf("Amount in INR= %f \n", convert);
                }
                else{
                    printf("Not defined");
                }
                return convert;
}

float D_P(float v)
{
    float convert;
    if(v>0)
                {
                    convert= v*0.72;
                    printf("Amount in Pound= %f \n", convert);
                }
                else{
                    printf("Not defined");
                }
                return convert;

}

float P_D(float u)
{
    float convert;
    if(u>0)
                {
                    convert= u/0.72;
                    printf("Amount in Dollar= %f \n", convert);
                }
                else{
                    printf("Not defined");
                }
                return convert;

}
