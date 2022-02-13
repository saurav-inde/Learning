#include <iostream>
#include <cmath>
using namespace std;


int collatz(int samp_num)
{
    int samp_out;
    
    if (samp_num % 2 == 0) {
        samp_out = samp_num / 2;
    }
    else {
        samp_out = 3*samp_num+ 1;
    }

    return samp_out;
}



int main()
{
    int samp_n;
    
    cout << "Enter the sample number: ";
    cin >> samp_n;
    
    while (samp_n != 1){
        samp_n = collatz(samp_n);
        cout << "     " << samp_n << endl;
    }
    
    return 0;
}