#include <stdio.h>
#include <stdbool.h>

//Logical Operators
int main(){
    //And
    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <=30 && sunny == false){
        printf("\nSeems kinda hot here");
    }
    else{
        printf("\nThis weather is way too cool...");
    }

    //Or
    float temper = 25;
    bool sunnyy = false;

    if(temper <= 0 || temper >=30){
        printf("\nThe weather seems abnormal");
    }
    else{
        printf("\nThis weather is alright...");
    }

    //Not
    float tem = 25;
    bool sun = false;

    if(!sun == false){
        printf("\nSeems kinda hot here");
    }
    else{
        printf("\nThis weather is way too cool...");
    }



    return 0;
}