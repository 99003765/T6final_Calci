#include <Conversion.h>
#include <trignometry.h>
#include <operation.h>
#include <BMI.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ OPERATION=1, BME, CONVERSION, TRIGONOMETRY, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    //while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. operations \n2. BMI\n3. Conversion\n4. trigonometry\n5. Exit");
    printf("\n\tEnter your choice\n");
   
     // __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        //printf("\n\tEnter your Numbers with space between them\n");
        // __fpurge(stdin);
       // scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case OPERATION:
        operation();
        break;
        /*case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;*/

        case TRIGONOMETRY:

            trig();
            
            getchar();
            break;

        case BME:
        {
            int result;
                if(calculator_operand1<=10)
                 {
                         printf("Please enter weight greater then 10kg ");
                    }
                    if(calculator_operand2<=0.8)
                    {
                        printf("please enter height greater then 9 Meter");
                    }
                        printf("\n");
                    
  //  printf("%.3f",x);
  //  printf("\n");
  //  printf("%d",weight);
 //   printf("\n");
                                 result= (calculator_operand1)/(calculator_operand2*calculator_operand2);
       
       
                            printf("%d", result);
                                printf("\n");
      
                        if(result<18.5)
                        {
                        printf("Underweight");
                         }
                            else if(result>18.5&&result<24.9)
                        {
                            printf("Normal and healthy Weight");
                            }
                    else if(result>25.0 && result<29.9)
                    {
                    printf("Over weight");
                    }
       else
       {
           printf("Obses");
       }
        }

        break;

        case CONVERSION:
        conversion();
            
            // __fpurge(stdin);
            getchar();
            break;
        
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
