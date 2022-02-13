#include <iostream>
#include <fstream>
#include <thread>
#include "digits_support.cpp"
using namespace std;

int main()
{

   int num_count[10] = {0};
    string filename;
    cout<<"Enter the filename with extension: ";
    cin >> filename;
    ifstream txtfile(filename);
    0;

    string lines;

    while (getline(txtfile, lines))
    {
        num_count[0] += count1(lines);
        num_count[1] += count2(lines);
        num_count[2] += count3(lines);
        num_count[3] += count4(lines);
        num_count[4] += count5(lines);
        num_count[5] += count6(lines);
        num_count[6] += count7(lines);
        num_count[7] += count8(lines);
        num_count[8] += count9(lines);
        num_count[9] += count0(lines);
    }
    txtfile.close();

    cout << "total instances of 0: " << num_count[0] << endl;
    cout << "total instances of 1: " << num_count[1] << endl;
    cout << "total instances of 2: " << num_count[2] << endl;
    cout << "total instances of 3: " << num_count[3] << endl;
    cout << "total instances of 4: " << num_count[4] << endl;
    cout << "total instances of 5: " << num_count[5] << endl;
    cout << "total instances of 6: " << num_count[6] << endl;
    cout << "total instances of 7: " << num_count[7] << endl;
    cout << "total instances of 8: " << num_count[8] << endl;
    cout << "total instances of 9: " << num_count[9] << endl;
    return 0;
}