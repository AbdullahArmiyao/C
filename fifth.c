#include <stdio.h>

    //If Statements
int main(){

    int age;

    printf("\n Enter age: ");
    scanf("%d", &age);

    if(age <= 17){
        printf("You are too young!");
    }
    else if(age == 18){
        printf("lucky you");
    }
    else{
        printf("You are ready to go!");
    }

    return 0;
}