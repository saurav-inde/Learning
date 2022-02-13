#include <iostream>
#include <cmath>
using namespace std;

void armscheck(int incoming)
{
    int copy = incoming;
    long result = 0;
    while (incoming > 0)
    {
        result +=pow((incoming % 10), 3);
        incoming = incoming / 10;
    }

    if (result == copy)
    {
        cout << result << " \n";
    }
}

int main()
{

    cout << "enter the range limit: ";
    int number,lower;
    cin >> lower>>number;
    for (int a = lower; a <= number; a++)
    {
        armscheck(a);
    }
    return 0;
}
