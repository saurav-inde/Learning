#include<iostream>
#include<iomanip>
//#include
#include<fstream>
using namespace std;

int main()
{
    ifstream openfile("output.txt");
    string fileline;

    ofstream filter("filtered.txt");
    while (getline(openfile, fileline))
    {
        if (fileline[13] == '1' && fileline[12] == '9')
        {
            for (int i = 0; i < 7; i++)
            {
                filter << fileline[i];
            }
            filter<<endl;
        }
        
    }
    
    return 0;
}