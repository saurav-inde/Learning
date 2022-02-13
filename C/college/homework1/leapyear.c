/*
1. Input: year as integer
2. Output: Leap year or not
*/
#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-----------------------------------defination section------------------------------------------------*/
#define NO 0
#define YES 1

/*-----------------------------------------------------------------------------------------------------
-----------------------------------global declaration section----------------------------------------*/
int is_leap_year(int year);
int is_leap = NO;
int input_year;
/*-----------------------------------------------------------------------------------------------------
-----------------------------------main section------------------------------------------------------*/
int main(void)
{ //year input
    printf("Enter Year to check: ");
    scanf("%d", &input_year);

    //output logic
    is_leap_year(input_year) ? printf("%d is leap year!.", input_year) : printf("NO %d is not a leap year", input_year);

    return 0;
}

/*-----------------------------------------------------------------------------------------------------
-----------------------------------subprogram section-------------------------------------------------*/

//function to check if year is leap or not
int is_leap_year(int year)
{

    if (!(year % 4) && year % 100)
    {
        is_leap = YES;
    }

    else if (!(year % 4) && !(year % 400))
    {
        is_leap = YES;
    }

    return is_leap;
}