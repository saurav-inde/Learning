#include <iostream>
#include <cmath>
using namespace std;
float y, x;
float epsilon = 0.01;

float function(float a, float b);
int main()
{

    cout << function(1.0, 5.0);

    return 0;
}

float f(float x)
{
    return x * x*x - 6* x -2;
}

float function(float ac, float bc)
{
    float a = ac, b = bc;

    x = (a + b) / 2;
    while (epsilon < abs(f(x)))
    {
        if (f(x) * f(a) < 0)
        {
            b = a;
            a = x;
        }
        else
        {
            a = x;
        }
        cout << "a = " << a << "  b = " << b << " f(x) = "<< f(x)<<endl;
        x = (a + b) / 2;
    }

    return x;
}