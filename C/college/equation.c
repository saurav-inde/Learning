#include <stdio.h>
#include <stdlib.h>

int main(){

    int limit = 50;

    for (int j = limit; j >= -limit; j--)
    {
        for (int i = -limit; i <= limit; i++)
        {
            float fx = i*i/25 - 10;

            
            int condition = -0.5 < fx - j && fx - j <= 0.5    ;                         //abs(j) < (-1*abs(i) + (limit + 1));
            condition ? printf("#", j) : printf(" ");
    
        }
        printf("\n");
    }

    return 0;
}