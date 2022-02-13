#include<iostream>
using namespace std;

int main()
{
std::string inpu ="8fT %";
char inpp[500];
int  intt[500];

for (int i = 0; i < inpu.length(); i++)
{
    intt[i] = (int)( (char)(inpu[i]) ) + 2000;
}


 int pin, pinn;
    cout << "enter 5 digit pins one by one";
    cin >> pin >> pinn;

long encrypted[500];

 for (int i = 0; i < 500; i++)
    {
        encrypted[i] = (long)(((intt[i] + pin) * pinn)+pinn)*pin;
    }
    for (int i = 0; i < 500; i++)
    {
        cout << intt[i] << "->" << encrypted[i] << endl;
    }



    for (int i = 0; i < 500; i++)
    {

        int decrypt = int(((encrypted[i] /long( pin)) - pinn)/long(pinn) - pin);
        cout << encrypted[i] << "->" << decrypt << endl;
    }
   

    return 0;
}