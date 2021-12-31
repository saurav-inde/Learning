#include <iostream>
using namespace std;

int main()
{
    cout << "enter lower and upper limit: \n";
    int count, lower;
    cin >> lower >> count;
    int counter = 0;
    cout << " n(n-1) is multiple of (n+1) for follwing numbwer.\n ";

        for (int i = lower; i < count; i++)
    {
        int n = i;
        int expression =(( n -11)*(n - 13)) % n;
        if (expression == 0)
        {
            counter++;
            cout <<i<< endl;
        }
    }
    if (count == 0)
    {
        cout << "NO NUMBERS FOUND TO SATISFY THE CONDITION!\n";
    }
    return 0;
}