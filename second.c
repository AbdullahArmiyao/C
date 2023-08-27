#include <stdio.h>
#include <string.h> //in this case, to prevent the break fgets create

//How to accept user input
int main(){

    char name[25]; //accept input not more than 25 bytes
    int age;
printf("\nWhat is your name\n");
//scanf("%s", &name); //user input
fgets(name, 25, stdin); //incase your input has white spaces, in this case space between first and last name
name[strlen(name)-1] = '\0';
/*
strlen gets the length of what is in its parenthesis
the -1 and the '\0' gets rid of the new line fgets create
*/


printf("Your name is %s.", name);

printf("\nHow old are you?\n");
scanf("%d", &age); //user input

printf("You are %d years old", age);

    return 0;
}