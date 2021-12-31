#include <iostream>
#include "fuactorial.cpp"
using namespace std;

int main()
{
    cout << "Enter the n and r for nCr: ";
    int n, r;
    cin >> n >> r;

    int top = factorial(n);
    int bot = factorial(r);
    int botn = factorial(n - r);

    int nCr = top / (bot * botn);

    cout << n << "C" << r << " = "<<nCr;

    return 0;
}