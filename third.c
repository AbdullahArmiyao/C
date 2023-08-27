#include <stdio.h>
#include <math.h> //includes stuff like sqrt

//Math Function
int main(){
     double A = sqrt(9); //square root
     double B = pow(2, 4); //exponent, first number is base
     double C = round(3.14); //rounding numbers
     double D = ceil(3.14); //rounding upward
     double E = floor(3.99); //rounding down
     double F = fabs(-100); //absolute value
     double G = log(3); // finding log
     double H = sin(45);
     double I = cos(45);
     double J = tan(45);

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%lf", C);
    printf("\n%lf", D);
    printf("\n%lf", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);


    //Creating a circle area and circumference calculator
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of circle:\t ", &radius);
    scanf("%lf", &radius);
    
    circumference = 2 * PI * radius;
    printf("Circumference: %.3lf", circumference);

    area = PI * pow(radius, 2);
    printf("\nArea: %.3lf", area);


    







    return 0;
}