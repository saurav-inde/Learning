#include <iostream>
#include <string>
#include "usekey2numkey.cpp" //userkey function
using namespace std;

int main()
{

    string user_ka_key;

    bool condition1 = 1;
    bool condition2 = 0;

    //loop to get desired user input.
    while (1)
    {
        //updates if 1st and last char of user key are valid
        condition1 = (int)user_ka_key[0] < 33 || (int)user_ka_key[0] > 126;
        condition2 = (int)user_ka_key[user_ka_key.length() - 1] < 33 || (int)user_ka_key[user_ka_key.length() - 1] > 126;

        //breaks the loop if 1st and last char are not useless.
        if (!(condition1 || condition2))
        {
            break;
        }

        std::cout <<" Key must begin and end with alphanumeric.";
        getline(cin, user_ka_key);
    }
    //cout<<"Enter your pass key:";
    string chabhi = userkey(user_ka_key);
    return 0;
}