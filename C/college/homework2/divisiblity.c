#include <stdio.h>
#include <ctype.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{

    // number declaration and user input
    int number;
    printf("Enter the number for divisiblity check: ");
    scanf("%d", &number);

    // divisiblity test for 3
    switch (number % 3)
    {
    case 0:
        printf("%d is divisible by 3\n", number);
        break;

    default:
        printf("%d is not divisible by 3\n", number);
        break;
    }

    // divisiblity test for 5
    switch (number % 5)
    {
    case 0:
        printf("%d is divisible by 5", number);
        break;

    default:
        printf("%d is not divisible by 5", number);
        break;
    }

    return 0;
}