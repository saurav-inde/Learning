/*
Input: a integer
Output : if the integer is odd or even
*/
#include <stdio.h>
/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    //declaration and assignment
    int number;
    printf("Enter the number to check: ");
    scanf("%d", &number);

    //logic
    number % 2 ? printf("%d is odd.", number) : printf("%d is even.", number);

    return 0;
}
