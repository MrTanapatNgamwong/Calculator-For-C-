#include<stdio.h>
float plus_function(float number1 , float number2);
float minus_function(float number1 , float number2);
float multiply_function(float number1 , float number2);
float devide_function(float number1 , float number2);
int main(void){
    float numberI1 , numberI2 , numberO;
    int channel;
    while (1)
    {
        printf("______________________________________\n");
        printf("|----------Basic Calculator----------|\n");
        printf("|----------Select Function-----------|\n");
        printf("|-1.Plus|2.Minus|3.Multiply|4.Devide-|\n");
        printf("|---------------5.Exit---------------|\n");
        printf("______________________________________\n");
        printf("Select Function : ");
        scanf("%d" , &channel);
        switch (channel)
        {
        case 1 :
            printf("Input Number1 : ");
            scanf("%f" , &numberI1);
            printf("Input Number2 : ");
            scanf("%f" , &numberI2);
            printf("Ouput : %.2f" , plus_function(numberI1 , numberI2));
            printf("\n");
            break;
        case 2 :
            printf("Input Number1 : ");
            scanf("%f" , &numberI1);
            printf("Input Number2 : ");
            scanf("%f" , &numberI2);
            printf("Ouput : %.2f" , minus_function(numberI1 , numberI2));
            printf("\n");
            break;
        case 3 :
            printf("Input Number1 : ");
            scanf("%f" , &numberI1);
            printf("Input Number2 : ");
            scanf("%f" , &numberI2);
            printf("Ouput : %.2f" , multiply_function(numberI1 , numberI2));
            printf("\n");
            break;
        case 4 :
            printf("Input Number1 : ");
            scanf("%f" , &numberI1);
            printf("Input Number2 : ");
            scanf("%f" , &numberI2);
            if(numberI2 == 0){
                printf("Error!!");
            }else{
            printf("Ouput : %.21f" , devide_function(numberI1 , numberI2));}
            printf("\n");
            break;
        case 5 :
            return 0;
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}
float plus_function(float number1 , float number2){
    float number_output;
    number_output = number1 + number2;
    return number_output;
}
float minus_function(float number1 , float number2){
    float number_output;
    number_output = number1 - number2;
    return number_output;
}
float multiply_function(float number1 , float number2){
    float number_output;
    number_output = number1 * number2;
    return number_output;
}
float devide_function(float number1 , float number2){
    float number_output;
    number_output = number1 / number2;
    return number_output;
}
