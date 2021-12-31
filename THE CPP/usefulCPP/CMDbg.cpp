#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        char star = ' ';
        int num = 7;
        cout << rand() % 2<< string(rand() % 4 + 3, star);
    }

    return 0;
}