#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    system("color 4F");

    char username[25];
    char password[25];
    char password2[25];
    
    printf("Enter Username: ");
    scanf("%s", &username);
    printf("\nEnter Password: ");
    scanf("%s", &password);
    printf("\nConfirm Password: ");
    scanf("%s", &password2);
    
    
    

    while(strcmp(password, password2)!=0)
    {
        while(strlen(password)<8 || strlen(password2)<8)
        {
            printf("Password Did Not Meet Expected Length. Password must be 10 characters or more");
            printf("\nEnter Password: ");
            scanf("%s", &password);
            printf("\nConfirm Password: ");
            scanf("%s", &password2);
        }
        
        //If the 2 Passwords aren't the same
        printf("Passwords Do Not Match");
        printf("\nEnter Password: ");
        scanf("%s", &password);
        printf("\nConfirm Password: ");
        scanf("%s", &password2);


    }
    
    printf("Welcome, %s", username);
   














    return 0;
}