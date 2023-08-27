#include <stdio.h>
#include <string.h>


    //For Loops, While Loops and do while loops
int main(){

//FOR LOOPS
    for(int i = 1; i <= 10; i++)
    {
       
        printf("\n%d", i);

    }


//WHILE LOOPS
    char name[25];

    printf("\nYour name is...");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0)
    {

        printf("Enter Name");
        printf("\nYour name is...");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    
    }


//DO WHILE LOOPS
//Executes a block of code once then checks the while condition to see if it's true to run again
    int num = 0;
    int sum = 0;
    
    do{
        printf("Enter Number: ");
        scanf("%d", &num);
        if(num > 0){
            sum += num;
        }
    }while (num > 0);
    printf("\nsum: %d", sum);
    






    return 0;
}