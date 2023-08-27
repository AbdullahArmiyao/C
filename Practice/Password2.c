#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    system("color 4F");

    char username[25] = "AnonymousX44";
    char username1[25];
    char password[25] = "broCode14";
    char password2[25];
    
    printf("Enter Username: ");
    scanf("%s", &username1);

     while(strcmp(username, username1)!=0)
    {
        while(strlen(username1)<7 || strlen(username1)>12)
        {
            printf("User Name Did Not Meet Expected Length. User Name must be 7 characters or more but less than 12");
            printf("\nEnter User Name: ");
            scanf("%s", &username1);
            
        }
        
        //If the 2 User Names aren't the same
        printf("User Names Do Not Match");
        printf("\nEnter User Name: ");
        scanf("%s", &username1);


    }

    printf("\nEnter Password: ");
    scanf("%s", &password2);
    
    
    

    while(strcmp(password, password2)!=0)
    {
        while(strlen(password2)<8)
        {
            printf("Password Did Not Meet Expected Length. Password must be 10 characters or more");
            printf("\nEnter Password: ");
            scanf("%s", &password2);
        }
        
        //If the 2 Passwords aren't the same
        printf("Passwords Do Not Match");
        printf("\nEnter Password: ");
        scanf("%s", &password2);


    }
    
    printf("Welcome, %s", username);
   














    return 0;
}