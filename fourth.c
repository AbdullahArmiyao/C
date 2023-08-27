#include <stdio.h>
#include <math.h>


     //Practice Work
    //Finding the hypotenuse of a right-angled triangle
int main(){

   
    double K;
    double L;
    double M;

    printf("\nEnter Opposite Length: \n");
    scanf("%lf", &K);
    printf("\nEnter Adjacent Length: \n");
    scanf("%lf", &L);

    M = sqrt(pow(K, 2) + pow(L, 2));
    printf("%.2lf", M);



    return 0;
}