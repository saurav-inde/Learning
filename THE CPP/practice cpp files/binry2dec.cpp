#include <iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int binn)
{
    int tempdec = 0;
    int temp = 0;
    int power = 0;
    while (binn != 0)
    {
        temp = binn % 2;
        binn = binn / 10;
        tempdec += temp * (pow(2, power));
        power++;
       // cout<<binn<<endl;
    }
    return tempdec;
}

int main()
{
    cout << "Enter in binary: ";
    int binary;
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << decimal;

    return 0;
}