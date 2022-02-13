#include <stdio.h>
#include <ctype.h>

#define PRINT_VOVEL_MESSEGE printf("%c is vovel.", character);
/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //character declaration and input
    char character;
    printf("Enter the alphabet: ");
    scanf("%c", &character);

    //if user inputs invalid character
    if (!isalpha(character))
    {
        printf("Please enter albhabet letter.");
        return 0;
    }
    

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        PRINT_VOVEL_MESSEGE
        break;

    default:
        printf("%c is Consonant", character);
        break;
    }


    return 0;

}
