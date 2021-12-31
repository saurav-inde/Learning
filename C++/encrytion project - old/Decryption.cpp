#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// int derived_cycle_a = 8;
//     int derived_add = 100;
//     int derived_2digit1 = 35;
//     int derived_2digit2 = 89;
//     int derived_2digit3 = 61;
//     int derived_3digit1 = 469;
//     long derived_8digit1 = 14682365;
int main()
{
    int derived_cycle_a = 8;
    int derived_add = 100;
    int derived_2digit1 = 35;
    int derived_2digit2 = 89;
    int derived_2digit3 = 61;
    int derived_3digit1 = 469;
    long derived_8digit1 = 14682365;

    ifstream encypted_file("encrypt2.txt");
    string encypted_file_lines;
    while (getline(encypted_file, encypted_file_lines))
    {
        // cout << encypted_file_lines << endl;
        int i = 0;
        //cout << encypted_file_lines.length() << endl;
        int start_dig_pos = 0;

        for (i; i < encypted_file_lines.length(); i++)
        {

            if (encypted_file_lines[i] == 32)
            {
                string number_set;
                // cout<<i<<" ";
                for (int j = start_dig_pos; j < i; j++)
                {
                    number_set += encypted_file_lines[j];
                    //std::cout << encypted_file_lines[j];
                }

                int int_set = std::stoi(number_set);

                int decrypted_set = (((int_set - derived_8digit1 + derived_3digit1) / derived_2digit2) - derived_2digit1);

                 //cout << decrypted_set << "->";
                //2nd level to 1st to now pre leve
                string after_dec_to_enc1 = to_string(decrypted_set);


                //if there is 0 in begining of 3 digit then it cause error so insert
                if (after_dec_to_enc1.length() == 2)
                {
                    after_dec_to_enc1.insert(0, "0");
                }
                else if (after_dec_to_enc1.length() ==1)
                {
                    after_dec_to_enc1.insert(0, "0");
                    after_dec_to_enc1.insert(0, "0");
                }
                
                


                string enc_2_pre;
               // cout<<after_dec_to_enc1<<"     ";

                int temp_digit;
                for (int m = 0; m < 3; m++)
                {
                    char char_of_dec = after_dec_to_enc1[m];
                    int temp_enc_2_pre = (char_of_dec - '0') - derived_cycle_a;

                    if (temp_enc_2_pre < 0)
                    {
                        temp_enc_2_pre += 10;
                    }
                    enc_2_pre += to_string(temp_enc_2_pre);
                }
                int final_decrypted_decimal = stoi(enc_2_pre);
                cout<<(char)(final_decrypted_decimal - derived_add);

                //and in end pos change of start picker
                start_dig_pos = (i + 1);
                //std::cout << endl;
            }

            //cout<<encypted_file_lines[i]<<" ";
        }
        cout << "\n";

        //cout<<"\n\n";
    }
    cin.get();

    return 0;
}