#include <iostream>
using namespace std;

int main()
{

    int n, n_cpy, min, possible = 1, max = 0;
    cin >> n;
    n_cpy = n;
    int a[n], b[n];



    while (n--)
    {
        cin >> a[n];
    }
    n = n_cpy;
    while (n--)
    {
        cin >> b[n];
    }


    n = n_cpy;
    min = a[n - 1];


    while (n--)
    {
        if (min > a[n])
        {
            min = a[n];
        }
    }
    cout<< min;
    n = n_cpy;


    while (n--)
    {
        if (((a[n] - b[n]) / min == int((a[n] - b[n]) / min)))
        {
            cout << -1;
            return 0;
        }
        if (max < (a[n] - b[n]) / min)
        {
            max = (a[n] - b[n]) / min;
        }
    }

    cout << max;

    return 0;
}