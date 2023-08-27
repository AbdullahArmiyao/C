#include <stdio.h>
#include <ctype.h>

    // Practice Work
    //Temperature calculator
int main(){

    char unit;
    float temp;

    printf("\nEnter unit: ");
    scanf("%c", &unit);
    
    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter Your Temperature: ");
        scanf("%f", &temp);
        temp =(temp * 9/5) + 32;
        printf("\nYour Temperature Is %.3f Farenheit", temp);
    }
    else if (unit == 'F'){
        printf("\nEnter Your Temperature: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("\nYour Temperature Is %.3f Celcius", temp);
    }
    else{
        printf("Invalid Unit...");
    }
    
    
    



    return 0;
}