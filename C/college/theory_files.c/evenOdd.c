
#include <stdio.h>
//#include <math.h>
int number;

/*-----------------------------------------------------------------------------------------------------
-----------------------------------main section------------------------------------------------------*/
int main(void)
{
    //number declaration and input
    printf("Enter the number: ");
    scanf("%d", &number);


    switch (number%2)
    {
    case 0:
        printf("%d is even.", number);
        break;

    case 1:
        printf("%d is odd.", number);
        break;
    }

    return 0;
}
