#include <iostream>
#include <cmath>
#include<fstream>

using namespace std;
ofstream distribution("dist.txt");

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////PRIME COUNTER FUNTION TAKES INPUT UP AND LOWER LIMT////////////////////////////////////////////////////////////////////////
int primeCounter(int lower, int upper)
{
    int flag;
    int count = 0;

    for (int i = lower; i <= upper; i++)
    {
        flag = 1;
        /* Instead of using directly sqrt(i) if variable lets say sqrti is used then the program finishes task much faster.
        example: for finding number of primes from 1 to 10000000 it took 131 seconds if we don't use variable but
        if variable is used it just took 7 seconds on my computer. */
        int sqrti = sqrt(i);
        for (int j = 2; j <= sqrti; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            count++;
        }
    }
    int range = upper - lower + 1;

    int totalPrimes = count;
    double primeRatio = totalPrimes * 100;
    double primePercent = primeRatio / range;
    //cout << totalPrimes << endl;
    distribution << primePercent <<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////MAIN FUNCTION BEGINS/////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    cout << "Enter lower lmit followed by upper limit: " << endl;
    int low, up;
    cin >> low >> up;

    if (low == 1)
    {
        low++;
    }
    for (int i = 1; i < up; i++)

    {
        if (i % 1000 == 0)
        {
            int low_copy = i + 1;
            int up_copy = 2 * i;
            primeCounter(low_copy, up_copy);
        }
    }

    //

    return 0;
}