#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//STRUCTS 

struct Player
{
    char name[12];
    int score;   
};


int main(){
    /*
        Means structure
        Collection of related members(Variables)
        Can be of different data types
        Listed under one name is a block of memory
        Very similar to classes in other programming languages (but no methods)
    */

   struct Player player1;
   struct Player player2;

   strcpy(player1.name, "Bro");      //to assign player 1 name, the . is used to access members of the struct
   player1.score = 4;
   strcpy(player2.name, "Bra");     
   player2.score = 5;

    printf("%s ", player1.name);
    printf("%d\n", player1.score);

    printf("%s ", player2.name);
    printf("%d", player2.score);






















    return 0;
}