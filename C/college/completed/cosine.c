/*
purpose: prints the cosine value
input: range, step size
output: cosine value table in range
*/

#include <stdio.h>
#include <math.h>

/*----------------------------defination section--------------------------------------------------*/
void cosine_table(float upper_limit,float lower_limit, float step_size);

/*-------------------------------------------------------------------------------------------------
--------------------------------------------------main section------------------------------------*/
int main()
{
    //variable inputs
    float lower_limit, upper_limit, step_size;

    printf("Enter the upper and lower limit of range, step size:\n\n\t");
    scanf("%f%f%f", &lower_limit, &upper_limit, &step_size);

    //function call
    cosine_table(upper_limit, lower_limit, step_size);

    return 0;
}
/*------------------------------------------------------------------------------------------------
-------------------------------subprogram section--------------------------------------------------*/

void cosine_table(float upper_limit, float lower_limit, float step_size)
{
    printf("\t\tANGLE             COSINE          SINE\n\n");
    int j = 1;
    // printf("hello ");
    for (float i = lower_limit; i <= upper_limit; i += step_size)
    {
        printf("\t%2d.   %f            %6.3f          %6.3f\n", j, i, cos(i), sin(i));
        j++;
    }
}