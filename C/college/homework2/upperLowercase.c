#include <stdio.h>
#include <ctype.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //declaration and input
    char letter;
    printf("Enter an alphabet letter: ");
    scanf("%c", &letter);
    

    switch (isalpha(letter))
    {
    case 1:  //isalpha outputs 1 if letter is uppercase
        printf("%c is uppercase letter.", letter);
        break;

    case 2:  //isalpha outputs 2 if letter is lowercase
        printf("%c is lowercase letter.", letter);
        break;
    
    default:
    printf("Please enter alphabet character.");
    }

    return 0;
}