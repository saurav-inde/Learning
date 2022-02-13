#include <stdio.h>

/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
    // nums declaration and user input
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    switch (num1 >= num2)
    {
    case 1: // if num1 is bigger than num2
        switch (num1 >= num3)
        {
        case 1:
            printf("%.2f is maximum.", num1);
            break;

        case 0:
            printf("%.2f is maximum.", num3);
            break;
        }
        break;

    case 0: // if num1 is smaller than num2
        switch (num2 >= num3)
        {
        case 1:
            printf("%.2f is maximum.", num2);
            break;

        case 0:
            printf("%.2f is maximum.", num3);
            break;
        }
        break;
    }
    return 0;
}