#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int derived_cycle_a;
    string prefile_lines;
    ifstream prefile("pre.txt");

    //file after 1st encryption
    std::ofstream encrypt1;
    encrypt1.open("encrypt1.txt", std::ios_base::app); // append instead of overwrite

    //cycles the digit
    while (getline(prefile, prefile_lines))
    {
        int total_chars_inline = prefile_lines.length();
        int i = 0;
        while (i < total_chars_inline)
        {
            int each_digit = (int)(prefile_lines[i]);
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

        // cout << prefile_lines.length()<<endl;
    }

    return 0;
}