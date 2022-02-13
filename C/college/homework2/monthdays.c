#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-----------------------------------defination section------------------------------------------------*/
#define SMALL_MONTH_MESSEGE printf("Month %d has 30 days", month_number);
#define BIG_MONTH_MESSEGE printf("Month %d has 31 days", month_number);
#define FEB_MESSEGE printf("Month %d has 28 days normally and 29 incase if it's leapyear");

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    // MONTH INPUT
    int month_number;
    printf("Enter the month number: ");
    scanf("%d", &month_number);

    // a tells if it is 1st half or 2nd half
    int a = month_number <= 7 && month_number > 0;

    switch (a)
    {
        // if month number is less than 7
    case 1:
        switch (month_number % 2)
        {
        case 1: // if month is odd
            BIG_MONTH_MESSEGE
            break;

        case 0: // if month is even
            switch (month_number)
            {
            case 2: // case for feb
                FEB_MESSEGE
                break;

            default:
                SMALL_MONTH_MESSEGE
                break;
            }
        }
        break;

        // if month number is mor than 7
    default:

        switch (month_number % 2)
        {

        case 1: // if month is odd
            SMALL_MONTH_MESSEGE
            break;

        default: // if month is even
            BIG_MONTH_MESSEGE
            break;
        }
        break;
    }

    return 0;
}
