#include <stdio.h>
#include <stdlib.h>
 

//To convert the greegorian date to week date, given the year, this will find the day of the week for Jan 1
//where Sun is 0 and Sat is 6
int get_1st_week(int year){
    int day;
    day = (((year-1)*365) + ((year - 1)/4)- ((year - 1)/100) + ((year)/400) + 1) % 7;
    return day;
}
int main(){

    system("color 1F");     //To change background color

    int year;               //User Inputs Year
    int month;              //Will be placed in the months array to read the info in months
    int day;                //used with daysInMonths to ptoduce dates
    int daysInMonth;        //used in days forloop
    int weekDay = 0;       //weekdays
    int startingDay;

    printf("Enter Year: ");
    scanf("%d", &year);
    
    //Listing Months
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //Setting days for each month

    //Setting Leap Year
    if ((year%4==0 && year%100!=0)|| year%400==0) //if leap year, Feb = 29 days
    {
        monthDay[1] = 29;
    }

    startingDay = get_1st_week(year); //call the function
    //To Print Out Months
    for(month=0; month<12; month++){


        /*This code below is simply saying print 31 days for Jan and the number of days in each month
        that is[j, f, m, a, m, j, j, a, s, o, n, d] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]*/
        daysInMonth= monthDay[month]; //Print the number of days in each month


        /*The code below means when th month is 0, it is January, think of it as
        [month]=[j, f, m, a, m, j, j, a, s, o, n, d] where Jan to Dec = 0 to 11
        which is why in the for loop, month has been set to 0*/
        printf("\n\n----------%s----------\n", months[month]);      //Month = Months
        printf("\n  Sun  Mon  Tue  Wed  Thur  Fri  Sat\n");         //print days

        //So the first day of the week does not always start with Sunday, but rather the actual date
        for (weekDay = 0; weekDay < startingDay; weekDay++)
        {
            printf("     ");
        }
        
        /*the day<=daysInMonth simply means print from day one to the last day of that particular month*/
        for (day=1; day<=daysInMonth; day++)
        {
            printf("%5d", day);

            if(++weekDay>6)        //If 7 days are printed, go to next line to indicate next week 
            {
                printf("\n");
                weekDay=0;
            }
            startingDay = weekDay;
        }
        
    }
    
        
    














    return 0;
}
