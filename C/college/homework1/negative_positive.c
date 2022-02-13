#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //declaration and assignment
    float number;
    printf("Enter the number: ");
    scanf("%f", &number);

    //logic
    if (number > 0)
    {
        printf("%.2f is positive", number);
    }
    else if (number < 0)
    {
        printf("%.2f is negative number", number);
    }

    else
        printf("it's zero!");
    return 0;
}
