#include <stdio.h>

    //Function Prototype
    /*
        This is a declaration without a a body, that comes before the
        main function. Ensures that calls to a function are made with 
        the correct argument
    */



void hello(char[], int); //function prototype

int main(){

    char name[] =  "Bro";
    int age = 21;








    hello(name, age);


    return 0;
}

void hello(char name[], int age){

    printf("Hello %s", name);
    printf("\nYou are %d years old", age);
}