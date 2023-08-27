#include <stdio.h>

     //Switches

int main(){
   
    /*
    more efficient alternative to using else if statements allows a value to be tested
    for equality against many cases 
    */

   char grade;

   printf("\n Enter Your Grade Letter: ");
   scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect\n");
            break;
        case 'B':
            printf("Not Bad\n");
            break;
        case 'C':
            printf("You tried\n");
            break;
        case 'D':
            printf("Try harder\n");
            break;
        case 'E':
            printf("Come on man\n");
            break;
        case 'F':
            printf("You are a failure\n");
            break;
        default:
            printf("Enter valid grade");
    }




    return 0;
}