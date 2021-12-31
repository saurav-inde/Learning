#include <iostream>
using namespace std;



int main()
{
    int intt[10] = {4, 65, 594, 53, 83};
    int pin, pinn;
    cout << "enter 5 digit pins one by one";
    cin >> pin >> pinn;

    long encrypted[10];

    for (int i = 0; i < 10; i++)
    {
        encrypted[i] = (long)(((intt[i] + pin) * pinn)+pinn)*pin;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << intt[i] << "->" << encrypted[i] << endl;
    }



    for (int i = 0; i < 10; i++)
    {

        int decrypt = int(((encrypted[i] /long( pin)) - pinn)/long(pinn) - pin);
        cout << encrypted[i] << "->" << decrypt << endl;
    }

    return 0;
}