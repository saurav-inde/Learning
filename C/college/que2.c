#include <stdio.h>

int main()
{

    int n;
    printf("Enter the n: ");
    scanf("%d", &n);


    for (int i = 1; i < n; i++)
    {

        if (i == 1 || i == (n - 1))
        {
            for (int j = 1; j < n; j++)
            {
                printf("#");
            }
            printf("\n");
        }



        else
        {
            for (int j = 1; j < n; j++)
            {

                
                if (j == 1 || j == n - 1 || j == (i))
                {
                    printf("#");
                }



                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
    }
}