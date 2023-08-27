#include <stdio.h>

    //Functions
    //create functions outside the main
void birthday(){
    printf("\nHappy Birthday To you");
    printf("\nHappy Birthday To you");
    printf("\nHappy Birthday Dear Ass Hole...");
    printf("\nHappy Birthday To you");
}
void brth(char name[], int age){ //these are parameters, what a function expects when invoked
    printf("\nHappy Birthday %s", name);
    printf("\nYou are %d years old", age);
}
//the return statement
double square(double x){ //we didn't use void cos we are returning a double back to the main, depending
//on what you are returning, you change from void to that(int, double, char)
    double result = x * x;
    return result;
}


int main(){
//call the function in here to run
birthday();

//using parameters and arguments

char name[] = "Dolla";
int age = 18;

brth(name, age);//using arguments, arguments are what you are sending to a function


double x = square(3.14);
printf("\n%f", x);


    return 0;
}