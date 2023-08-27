#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_1st_date(int year)
{
    int day;
    day = (((year-1)*365) + ((year - 1)/4)- ((year - 1)/100) + ((year)/400) + 1) % 7;
    return day;
}







int  main(){

    system("color 5F");

    int year;
    int month;
    int weekDays;
    int startingDate;
    int daysInMonth;
    int days;

    printf("Enter Year: ");
    scanf("%d", &year);

    char monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};

     if ((year%4==0 && year%100!=0)|| year%400==0) //if leap year, Feb = 29 days
    {
        monthDays[1] = 29;
    }
    
    startingDate = get_1st_date(year);
    for (month = 0; month < 12; month++)
    {

       daysInMonth = monthDays[month];
       printf("\n-----------------------%s-----------------------\n", months[month]);//therefore the user input of month 
                                                                                   //is the values of months
                                                                                   //therefore month = months
    
    
        printf("   Sun   Mon   Tue   Wed   Thurs   Fri   Sat\n");
        
        for(weekDays=0; weekDays<startingDate; weekDays++)
        {
            printf("      ");
        }
        
        for(days=1; days<=daysInMonth; days++)
        {
            printf("%6d", days);
            if(++weekDays>6)
            {
                printf("\n");
                weekDays = 0;
            }
            startingDate = weekDays;
        }   
        
        
    }
    


















    return 0;
}