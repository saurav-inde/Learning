#include <iostream>
using namespace std;

int main()
{
    cout << "enter the triplets one at a time: ";
    int a, b, c;
    cin >> a >> b >> c;

    //decides which is hypotenuse
    int hypo = max(a, max(b, c));
    int base = min(b, min(a, hypo));
    int height;

    if (a != hypo && a != base)
    {
        height = a;
    }
    else if (b != hypo && b != base)
    {
        height = b;
    }
    else
    {
        height = c;
    }

    if (height * height + base * base == hypo * hypo)
    {
        cout << "The triplets make right angle triangle as " << base << "^2 + " << height << "^2 = " << hypo << "^2\n";
    }
    else
    {
        cout << "numbers are not making a right angle triangle\n";
    }

   // cout<<height<<base<<hypo;
    return 0;
}