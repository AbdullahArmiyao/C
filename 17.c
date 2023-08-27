#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ARRAYS
int main(){

    system("color a");
    /*Data structure used to store many characters/ values of the same data type
    like int or float or double etc, only difference is add [] after naming it and
    place the values in a {}...oh and don't forget to use ; at the end of the code*/

    
    double prices[]={5.50, 4.00, 3.90, 2.88, 1.90};

    printf("$%.2lf\n", prices[0]); //to access elements in the array, list the index number

    double costs[5];            //setting how many elements yo want in the array so you van alter it later
    costs[0] = 10;
    costs[1] = 20;
    costs[2] = 30;
    costs[3] = 40;
    costs[4] = 50;
    printf("$%.2lf\n", costs[3]);

    double fares[10] = {5.50, 4.00, 3.90, 2.88, 1.90};      //merging the two ways
    fares[5] = 10;
    fares[6] = 20;
    fares[7] = 30;
    fares[8] = 40;
    fares[9] = 50;
    printf("$%.2lf\n", fares[6]);
   

    //How to loop through and print the element of an array

    double wages[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    //size of operator in bytes (prints out the size of an array in bytes)
    printf("%d bytes\n", sizeof(wages));        //by running this my array = 80 bytes
     
    for(double wages=0; wages<=10; wages++)       // so instead of wages<=10, you can use the for loop bellow
    {
        printf("$%.2lf\n", wages);
    }
    double wage[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i=0; i < sizeof(wage)/sizeof(wage[0]); i++)   //this divides the total bytes per value and runs the code that number of times
    {
        printf("$%.2lf\n", wage[i]);        //in this case i = wage
    }
    

    //2D Arrays

    //to store  grid or matrix of data, create an array to carry another array like this {{},{}}
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
    /*
    123 are the first array which make the first row and 456 make the second array and row. You add a second
    [] to the variable .i.e. numbers[] to make it 2d, after state the maximize size of each array in the second
    [] as above and the number of arrays in the first...although this one isn't necessary
    what it will look like is {1, 2, 3}
                              {4, 5, 6}
    */

   //how to Assign values
   int number[3][3];

    number[0][0] = 1;        //to set first column in first row
    number[0][1] = 2;        //to set second column in first row  
    number[0][2] = 3;        //to set third column in first row
    
    number[1][0] = 4;       //to set first column in second row
    number[1][1] = 5;       //to set second column in second row
    number[1][2] = 6;       //to set third column in second row

    number[2][0] = 7;       //to set first column in third row
    number[2][1] = 8;       //to set second column in third row
    number[2][2] = 9;       //to set third column in thirdd row

    /*how to display elements in a 2 dimensional array, you use nested loops...now you see you don't know,
    next time you will pay attention to it */
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", numbers[i][j]);

        }
        printf("\n");
    }

    for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            printf("%d ", number[k][l]);
        }
        printf("\n");
    }

    //Creating an array of strings
    char cars[][10] = {"Mustang", "Camaro", "Covertte"};
    //it is a 2d array cos the strings are arrays on their own

    /*problem, you can't directly change one of the values. 
        by this i mean 
        cars[0] = tesla; this will produce an error
    solution, we use the strcpy function in the string library*/
    strcpy(cars[0], "Tesla");       //this replaces the Mustang

    //to print this out, we don't need nested loops
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    






    return 0;
}