#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    bool isfactor = 0;
    cout << "enter number: ";
    cin >> number;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isfactor = 1;
        }
        else
        {
            isfactor = 0;
        }  
        if (isfactor == 1)
        {
            cout<<i<<"  ";
        }
        
    }

    return 0;
}