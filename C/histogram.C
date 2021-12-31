#include <stdio.h>
int main()
{
    char character;
    int arra[10] = {0};

    while (true)
    {
        scanf("%c", &character);
        if (character == 'e')
        {
            break;
        }

        if ((character - '0' < 10) && (character - '0' >= 0))
        {
            arra[character - '0']++;
           // printf("%d", arra[character - '0']);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d | ", i);
        //printf("%d", arra[i]);
        for (int j = 0; j < arra[i]; j++)
        {

            printf("#");
        }

    }
printf("\n________________________________________________\n  |      freq. of integers\n  |");

    return 0;
}