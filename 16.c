#include <stdio.h>

    //Break and Continue
int main(){
        //Break exits the switch/loop
        //Continue skips that code and forces the next iteration of the loop
    for(int i=1; i<=20; i++)
    {
        printf("%d\n", i);        //will print 1 to 20
    }
    for(int j=1; j<=20; j++)
    {
        if(j == 13)
        {
            continue;
        }
        printf("%d\n", j);                //will print all except 13
    }
    for(int k=1; k<=20; k++)
    {
     if(k == 13)
        {
            break;
        }
        printf("%d\n", k);                //will stop at 12
    }




    return 0;
}