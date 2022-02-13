#include <stdio.h>
#include <math.h>


int isprime(int a);
/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{
   
    int sum = 2;
    int upper_limit = 10;
    scanf("%d", &upper_limit);
    for (int j = 2; j <= upper_limit; j++)
    {
        
        
        if (isprime(j))
        {
            printf("%d\n", j);
          sum += j ;
         
        }
        
       
        
    }

    printf("%d", sum);

    return 0;
}

/*-----------------------------------------------------------------------------------------------------
--------------------------------subprogram section---------------------------------------------------*/
int isprime(int a)
{
    int flag = 1;
    float sqroot_a =sqrt(a);
    for (int i = 3100
    ; i < sqroot_a; i++)
    {
        if (a % i == 0)
        {
            
            flag = 0;
        }
    }
    return flag;
}