#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // Create a text file
    ofstream MyWriteFile("filename.txt");

    cout << "enter lowe and upper limit: ";
    int a ,b;
    cin >> b >>a;

    // Write to the file
    for (int i = b; i < a; i = i + 2)
    {
        int flag = 1;
        int sqrti = sqrt(i);
        for (int k = 3; k <= sqrti; k = k+2)
        {
            if (i % k == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            MyWriteFile << i << endl;
            //cout<<"esasd";
        }
    }

    // Close the file
    MyWriteFile.close();
    /*   
        // Create a text string, which is used to output the text file
        string myText;

        // Read from the text file
        ifstream MyReadFile("filename.txt");

        // Use a while loop together with the getline() function to read the file line by line
        while (getline(MyReadFile, myText))
        {
            // Output the text from the file
            cout << myText << endl;
        }

        // Close the file
        MyReadFile.close();
        */
}
