#include <stdio.h>
#include <stdlib.h>


//Nested Loops, a loop inside another loop
int main(){

    int row;
    int column;
    char symbol;

    printf("\nEnter Number of rows: ");
    scanf("%d", &row);

    printf("\nEnter Number of columns: ");
    scanf("%d", &column);

    scanf("%c");                                            //to get rid of the spacing

    printf("\nEnter Symbol: ");
    scanf("%c", &symbol);

    for(int i = 1; i<=row; i++)                         //For one iteration, the loop inside must complete 1 of its own iterations
    {
        for(int j = 1; j <= column; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }


    return 0;
}