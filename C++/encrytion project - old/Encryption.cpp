#include <iostream>
#include <string>
#include <fstream>
//#include<stdlib.h>

using namespace std;

int main()
{
    int derived_cycle_a = 8;
    int derived_add = 100;
    int derived_2digit1 = 35;
    int derived_2digit2 = 89;
    int derived_2digit3 = 61;
    int derived_3digit1 = 469;
    long derived_8digit1 = 14687474;
    
    string prefile_lines;
    ifstream prefile("pre.txt");

    //file after 1st encryption
    std::ofstream encrypt1;
    encrypt1.open("encrypt1.txt", std::ios_base::app); // append instead of overwrite
                                                       //--------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //cycles the digit
    while (getline(prefile, prefile_lines))
    {
        int total_chars_inline = prefile_lines.length();
        int i = 0;
        while (i < total_chars_inline)
        {
            char char_of_enc = prefile_lines[i];
            int each_digit = char_of_enc - '0';
            int new_digit = each_digit + derived_cycle_a;

            int new_each_digit;
            if (new_digit > 9)
            {
                new_each_digit = new_digit % 10;
            }

            else
            {
                new_each_digit = new_digit;
            }
            encrypt1 << new_each_digit;
            i++;
        }
        encrypt1 << endl;

        // cout << prefile_lines.length()<<endl;
    }
    encrypt1.close();

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------
    ifstream firstfile("encrypt1.txt");

    //file after 2nd encryption
    std::ofstream encrypt2;
    encrypt2.open("encrypt2.txt", std::ios_base::app); // append instead of overwrite
    string firstfile_lines;

    while (getline(firstfile, firstfile_lines))
    {
        int i = 0;
        for (i; i < firstfile_lines.length(); i++)

        {
            if (i % 3 == 0)
            {
                string firstfile_set_of_3ints;

                for (int j = i; j <= i+2; j++)
                {
                    firstfile_set_of_3ints += (firstfile_lines[j]);
                   // cout<<firstfile_set_of_3ints<<endl;
                }
                int temp_set1 = stoi(firstfile_set_of_3ints);
                //cout<<temp_set1<<endl;

                int encrypt_temp_set1 =(((temp_set1 + derived_2digit1) * derived_2digit2)  - derived_3digit1) + derived_8digit1 ;

                encrypt2 << encrypt_temp_set1<< " ";
            }
        }
        encrypt2<<endl;
    }
    cout<<"Data Encrypted.";
    return 0;
}