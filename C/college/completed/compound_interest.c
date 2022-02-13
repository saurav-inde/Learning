/*
# purpose: calculates the compounded interest
# input: principle, rate of interest, years, period
# output: interest and final amount at end of every year 
*/

#include <stdio.h>
#include <math.h>

//printf and scanf defination
#define PX printf
#define SX scanf

void comp_int(float principle, float rate, int years, int period);

/* -----------------------------------------------------------------------
-----------------------------main function-----------------------------------*/
void main(void)
{   
    //declaration of variables
    int years, period;
    float principle, rate;

    //input of values
    
    PX("Enter the principle, rate, years, and period:\n\n\t");
    SX("%f%f%d%d", &principle, &rate, &years, &period);

    //function call
    comp_int(principle, rate, years,/*hgh*/ period);
}

/*---------------------------------------------------------------------------
-------------------subprogam section----------------------------------------*/
void comp_int(float principle, float rate, int years, int period)
{/*
# function prints out the situation after every year irrespective of the 
period.
#(i+1) is the toal number of periods iterated over 

*/
    for (int i = 0; i < years * period; /*hi*/i++)
    {
        if ((i + 1) % period == 0)
        {
            float amount = principle * pow((100 + rate) / 100, (i + 1));
            printf("After year %d:\n\t intrest generated: %.2f total amount: %.2f\n", 1 + i / period, amount - principle, amount);
        }
    }
}