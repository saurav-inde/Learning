#include <stdio.h>

#define ISUPPER (character_value > 64 && character_value < 91)
#define ISLOWER (character_value > 96 && character_value < 123)

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //Character declaration and assignment
    char character_value;
    printf("Enter the character to check: ");
    scanf("%c", &character_value);

    //logic
    if (ISLOWER || ISUPPER)
    {
        printf("%c is an alphabet character.", character_value);
    }

    else
    {
        printf("%c is not an alphabet character.");
    }

    return 0;
}