#include <iostream>
using namespace std;

int factorial(int numb)
{

    int fact = 1;

    for (int i = numb; i > 0; i--)
    {
        fact *= i;
    }

   // cout << fact;

    return fact;
}
//commenting main so that factorial can be used in any file of directory
/*int main()
{
    cout << "enter the number ";
    int num;
    cin >> num;
    factorial(num);

    return 0;
}*/