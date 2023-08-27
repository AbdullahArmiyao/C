#include <stdio.h> //include standard input, output
#include <stdbool.h> //to use boolean

//Every Basic Info
//try not to forget ; at the end of code

int main(){
    
    printf("Hello\n");
    printf("Yello World\n");

    //Escape Sequences
/*
     This is a character combination consisting of \ followed by a letter or combination
    of digits. They specify actions within a line or string of texts.
    example:  \n = newline
              \t = tab
*/
  //creating a number grid
    printf("1\t2\t3\n4\t5\t6\n"); 
  //to quote something
    printf("\"I love Pizza\" -Abraham Lincoln \'I think\' \n");


    //Variables
/*
    You already know what variables are
*/

    int x; //declaration
    x = 25; //initialization; giving the var a value
    int y = 321; //declaration + initializing

    int age = 18; //integer
    float gpa = 3.25; //float for decimal values
    char grade = 'A'; //single character
    //strings cannot be used in c programming
    char name[] = "Bond"; //array of characters

    printf("You are %d years old\n", age); 
    //NOTE:
    /*
    %d (d=decimal) is a format specifier, use it in place of where you want to summon the var
    then after bring a , at the end and call the var,  but for int values
    for arrays it is %s(s=string)
    for char it is %c(c=character)
    for float, $f
    */
   printf("The name is %s\n", name);
   printf("Average grade is %c\n", grade);
   printf("With a GPA of %f\n", gpa);

    //Data Types
    double d = 2.14534; //double has more precision than float and its fs is %lf
    /*
    float uses 4 bytes(32-bits of precision) = 6 - 7 digits
    double uses 8 bytes(64-bits) = 15 - 16 digits
    */
    
    bool e = true; //boolean works with binary(1=true or 0=false) %d
    
    char f = 100; //can store integers from -128 to 127
    /*
     %d to print number(100) or %c to print its letter(d)
     */
    unsigned char g = 255; //can store numbers from 0 to 255
    /*
     %d to print number(100) or %c to print its letter(d)
     */

    short int h = 32627; //(-32768 to 32767) %d
    unsigned short int i = 65535; //(0 to 65535) %d
    //NOTE:
    /*
    you can also type them as
    short h = 324324;
    unsigned short i =45224;
    */

   unsigned int k = 893692389;  //(0 to 4 billion) %u


    //Format Specifiers
  /*
    % = defines and formats a type of data to be displayed

    %c = character
    %s = string
    %f = float
    %lf = double
    %d = integer

    %.1 = decimal precision....depending on how many digits you want after the decimal
    %1 = minimum field with
    %- = left align

  */  

    //Constant
    /*
    is a fixed value that cannot be altered by the program during its execution
    It is good practice to let the letters be uppercase .eg: const PI = 3.149;
    */
   const float PI = 3.149159;
   printf("%f\n", PI);
   
    
    //Arithmetic Operators
    //nothing here cos you already know them from other programming languages
    
    //Augmented Assignment Operators
    /*
    used to replace a statement where an operator takes a variable as one of its
    arguments and then assigns the result back to the same variable.
    eg. x = x + 1
        x+=1
    */
    int w = 10;
    //w = w + 2
    w+=2;
    //w = w + 3
    w-=3;
    printf("%d", w);
    
   
    
    
    
    
    
    return 0;
}

//How to compile a c file

/*
open cmd
change directory to location of c file
 run gcc "name of file"
 then run "name".exe
*/  

//This is a single line comment
/*
This is a
multiline comment
*/




    
