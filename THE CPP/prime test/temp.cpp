#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 7;
    int j = 5;
    string temp1 = to_string((char)i);
    string temp2 = to_string((char)j);
    string product = to_string(i * j);
    string temp = temp1 + " * " + temp2 + " = " + product;
cout<<temp;
return 0;
}