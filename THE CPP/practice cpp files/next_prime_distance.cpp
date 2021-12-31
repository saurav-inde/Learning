#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
     // Create a text file
    ofstream MyWriteFile("prime_distance.txt");

    cout << "enter lowe and upper limit: ";
    int a ,b;
    cin >> b >>a;

    // Write to the file
    int last_prime = 0;
    for (int i = b; i < a; i = i + 1)
    {
        int flag = 1;
        int sqrti = sqrt(i);
        for (int k = 3; k <= sqrti; k = k+1)
        {
            if (i % k == 0)
            {
                flag = 0;
                break;
            }
        }
        
        if (flag == 1)
        {
         
         int prime_dist = i+1 - last_prime;
last_prime = i;
            
            MyWriteFile << prime_dist << endl;
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
    return 0;
}