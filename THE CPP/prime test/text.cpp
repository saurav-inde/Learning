#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;

int main()
{
    ofstream output;
    output.open("output.txt");
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            // cout << i<<" * "<< j<<" = " <<i * j <<"________";
            string temp1 = to_string((char)i);
            string temp2 = to_string((char)j);
            string product = to_string(i * j);
           // string temp =  " * "   " = " + product;
            output << setw(2)<<temp1<<" * "<<setw(2)<<temp2<<" = "<<setw(4)<<product<<endl;
        }
        
    }

    return 0;
}