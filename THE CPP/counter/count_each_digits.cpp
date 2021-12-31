#include <iostream>
#include <fstream>
#include <thread>
#include "digits_support.cpp"
using namespace std;

int main()
{

    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int num8 = 0;
    int num9 = 0;
    string filename;
    cout<<"Enter the filename with extension: ";
    cin >> filename;
    ifstream txtfile(filename);
    0;

    string lines;

    while (getline(txtfile, lines))
    {
        num1 += count1(lines);
        num2 += count2(lines);
        num3 += count3(lines);
        num4 += count4(lines);
        num5 += count5(lines);
        num6 += count6(lines);
        num7 += count7(lines);
        num8 += count8(lines);
        num9 += count9(lines);
        num0 += count0(lines);
    }
    txtfile.close();

    cout << "total instances of 0: " << num0 << endl;
    cout << "total instances of 1: " << num1 << endl;
    cout << "total instances of 2: " << num2 << endl;
    cout << "total instances of 3: " << num3 << endl;
    cout << "total instances of 4: " << num4 << endl;
    cout << "total instances of 5: " << num5 << endl;
    cout << "total instances of 6: " << num6 << endl;
    cout << "total instances of 7: " << num7 << endl;
    cout << "total instances of 8: " << num8 << endl;
    cout << "total instances of 9: " << num9 << endl;
    return 0;
}