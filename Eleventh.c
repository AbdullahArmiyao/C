#include <stdio.h>


    //Ternary  Operator = shortcut to if/else


int findmax(int x, int y){
   /* if(x > y){
        return x;
    }
    else{
        return y;
    }*/
    //This code replaced the if else statement
    return (x > y) ? x : y;
}

int main(){

    int max = findmax(3, 4);

    printf("%d", max);






    return 0;
}