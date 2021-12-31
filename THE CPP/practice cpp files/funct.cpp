#include <iostream>
using namespace std;

int primechecker(int numb1)
{
    int isprime = 1;

    int i;
    for (i = 2; i < numb1; i++)
    {
        if (numb1 % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
        {
            cout << numb1<<endl;
        }
    return 0;
}

int main()
{
    cout << "Enter limt numbers.\n";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Prime numbers are:\n";

    for (num1; num1 <= num2; num1++)
    {
        primechecker(num1);
    }

    return 0;
}