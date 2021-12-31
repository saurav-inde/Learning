#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter number: " << endl;
    cin >> num;

    int reverse_num = 0;
 int i = num;
    while(i > 0)
    {
        int last_digit = num % 10;
        reverse_num = 10 * reverse_num + last_digit;
      num =  i = int(num / 10);
    }

    cout<<reverse_num;
}
