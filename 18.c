#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//the function to do the sorting out of the array, it is void cos we are not returning anything
void sort(int array[], int size)
{
    for(int i=0; i < size-1; i++)
    {
        for(int j=0; j < size-1; j++)
        {
            //to check if the number on the left is greater than the one on the right
            if(array[j] > array[j+1])       //means is current j value is greater than next j value
            {
                int temp = array[j];        //creating a temporal variable to hold the current j index
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


//to display elements of the array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
}




int main()
{

//Swapping Variable Values
    char x = 'X';
    char y = 'Y';
    //x = y;                              //prints y on both sides
    //y = x;                              //prints x on both sides
    
    //In order to swap, we create a 3rs variable which will act as a temporary storage
    char temp;

    temp = x;
    x = y;
    y = temp;
    
    printf("x = %c\n", x);
    printf("y = %c\n", y);




    //however this, method is different when it comes to strings

    char xx[15] = "water";
    char yy[15] = "lemonade";
    char tempo[15];

    //problem is if the stringlenths aren't the same, it might be a problem, so set the string size equal
    strcpy(tempo, xx);
    strcpy(xx, yy);
    strcpy(yy, tempo);


    printf("x = %s\n", xx);
    printf("y = %s\n", yy);



    //Sorting Elements Of An Array

    int array[] = {9, 1, 5, 8, 2, 7, 4, 3, 6};
    int size = sizeof(array)/sizeof(array[0]);
    //We create a function to do the sorting out to make the code look good

    sort(array, size);          //invoking the funtion
    printArray(array, size);    //invoking the print function












    return 0;
}