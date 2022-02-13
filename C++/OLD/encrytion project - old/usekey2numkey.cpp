#include <iostream>
#include <string>
#include "rem_zero.cpp" //it has the function that output ints with zero gone and reversed
using namespace std;

string userkey(string user_text_key)
{

    bool condition1 = 1;
    bool condition2 = 1;

    //loop to get desired user input.
    while (1)
    {
        //updates if 1st and last char of user key are valid
        condition1 = (int)user_text_key[0] < 33 || (int)user_text_key[0] > 126;
        condition2 = (int)user_text_key[user_text_key.length() - 1] < 33 || (int)user_text_key[user_text_key.length() - 1] > 126;

        //breaks the loop if 1st and last char are not useless.
        if (!(condition1 || condition2))
        {
            break;
        }

        std::cout << " Key must begin and end with alphanumeric."
                  << "\n\t\t";
        getline(cin, user_text_key);
    }

    //converts user key to ascii char by char and stores in a int array
    int char2int[50];
    for (int i = 0; i < user_text_key.length(); i++)
    {
        int removedzero = rem_zero((int)((char)user_text_key[i]));

        if (user_text_key.length() % 2 == 0)

        {
            char2int[i] = removedzero;
        }

        else
        {
            char2int[i] = removedzero;
        }
    }

    //converts the int array to string of digits
    string int2str;
    for (int i = 0; i < user_text_key.length(); i++)
    {
        int2str += to_string(char2int[i]);
    }

    // std::cout << "\nencryption key for text key\n"
    //           << int2str;
    return int2str;
}