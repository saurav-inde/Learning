#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    int counter = 0;
    std::string file_line;
    std::string filename;
    int spaces = 0;
    cout << "Enter filename with extension: ";
    cin >> filename;
    ifstream thefile(filename);
    //thefile.open();

    while (getline(thefile, file_line))
    {
        for (int i = 0; i < file_line.length(); i++)
        {
            counter++;
            if (file_line[i] == 32)
            {
                //cout<<file_line[i]<<"sp";
                spaces++;  
            }
        }
    }

    cout << "visible chars: " << counter - spaces<<endl;
    cout << "total numbers of characters in file are: " << counter;

    return 0;
}