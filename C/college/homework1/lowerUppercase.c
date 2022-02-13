/**/

#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-----------------------------------main section------------------------------------------------------*/
int main()
{
    //declaration and assignment
    char alphabet;
    printf("Enter the alphabet letter: ");
    scanf("%c", &alphabet);

    //logic
    if (alphabet > 96 && alphabet < 123)
    {
        printf("%c is lowercase", alphabet);
    }

    else if (alphabet > 64 && alphabet < 91)
    {
        printf("%c is uppercase", alphabet);
    }

    else
    {
        printf("Please enter a alphabet letter.");
    }

    return 0;
}
