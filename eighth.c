#include <stdio.h>
#include <math.h>


int main(){

    //Simple Calculator
    double x;
    char operator;
    double z;
    double result;

    printf("\nEnter Operator: %c", operator);
    scanf("%c", &operator);

    printf("\nEnter Value 1: ");
    scanf("%lf", &x);

    printf("\nEnter Value 2: ");
    scanf("%lf", &z);
        
    switch(operator){
        case '*':
            result = x * z ;
            printf("%.2lf", result);
            break;
         case '-':
            result = x - z ;
            printf("%.2lf", result);
            break;
         case '+':
            result = x + z ;
            printf("%.2lf", result);
            break;
         case '/':
            result = x / z ;
            printf("%.2lf", result);
            break;
        case '^':
            result = pow(x, z);
            printf("%.2lf", result);
            break;
        default:
            printf("Invalid Operator or Number");





    }






    return 0;
}
