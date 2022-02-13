#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pattern_len;
    printf("Enter a odd positive integer");
    scanf("%d", &pattern_len);

    int limit = (pattern_len - 1) / 2;

    for (int j = limit; j >= -limit; j--)
    {
        for (int i = -limit; i <= limit; i++)
        {
            int (condition) = abs(j) < (-1*abs(i) + (limit + 1));
            condition ? printf("#", j) : printf(" ");
    
        }
        printf("\n");
    }

    return 0;
}