#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int number;
    bool isfactor = 0;
    cout << "enter number: ";
    cin.ignore();
    cin >> number;
    unsigned long long int rootnum = sqrt(number);
    for (int i = 2; i <= rootnum; i += 2 )
    {
        if (number % i == 0)
        {
            isfactor = 1;
        }
        else
        {
            isfactor = 0;
        }  
        if (isfactor)
        {
            cout<<i<<"  ";
        }
        
    }

    return 0;
}