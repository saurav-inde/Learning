#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //declaration and user input
    int hour, minute, sec;
    printf("Enter hour, minute and second in 24 hours format: ");
    scanf("%d%d%d", &hour, &minute, &sec);
    
    //input validity check
    int time_correct = hour < 24 && minute < 60 && sec < 60;
    if (!time_correct)
    {   printf("Please enter time correctly.");
        return 0;
    }
    
    //am pm check
    switch (hour / 12)
    {
    case 0:
        printf("It's %d:%d:%d AM", hour, minute, sec);
        break;

    case 1:
        printf("It's %d:%d:%d PM", hour%12, minute, sec);
        break;
    }

    return 0;
}