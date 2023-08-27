#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

    // Practice Work
    //Temperature calculator
int main(){

    char unit;
    float temp;
    bool sick = false;

    printf("\nEnter unit: ");
    scanf("%c", &unit);
    
    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter Your Temperature: ");
        scanf("%f", &temp);
        temp =(temp * 9/5) + 32;
        if(temp <= 0 && temp <= 98.5){ 
            printf("\nYour Temperature Is %.3f Farenheit, you are pretty cold", temp);
            }
        else if(temp = 98.6){
            printf("\nYour Temperature Is %.3f Farenheit, you are okay", temp);
        }
        else if(temp >= 98.7 && temp <= 212){
             printf("\nYour Temperature Is %.3f Farenheit, you are burning up...", temp);
        }
        else{
            printf("Invalid Unit");
        }
    }
            
    else if (unit == 'F'){
        printf("\nEnter Your Temperature: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
         if(temp <= 0 && temp <= 36){ 
            printf("\nYour Temperature Is %.3f Celcius, you are pretty cold", temp);
            }
        else if(temp == 37){
            printf("\nYour Temperature Is %.3f Celcius, you are okay", temp);
        }
        else if(temp >=38 && temp <= 100){
             printf("\nYour Temperature Is %.3f Celcius, you are burning up...", temp);
        }
        else{
            printf("Invalid Unit");
        }
    }
        
    else{
        printf("Invalid Unit...");
    }
    
    
    



    return 0;
}