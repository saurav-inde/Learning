#include <iostream>
#include <fstream>
using namespace std;

void create_nwrite()
{
    ofstream myfile("userwritten.txt");
    myfile << "kasd fcdj";
    myfile.close();
}

void appender(string temp){
    std::ofstream outfile;

  outfile.open("userwritten.txt", std::ios_base::app); // append instead of overwrite
  outfile << "\n"<<temp; 
}

string read_file()
{
    
     ifstream myreadfile("userwritten.txt");
    string linebyline;
    //cout<<"\n\nFILE CONTENTS:\n\n";
    while (getline(myreadfile, linebyline))
    {
   line_once = linebyline;
    chars2int[i] = (int)( (char)(line_once[i]) ) + 2000;
    }
    myreadfile.close();
}

int main()
{  

std::string line_once;
char line2chars[500];
int  chars2int[500];
//pre encrypter to file

ifstream userfile("userwritten.txt");

//ofstream prefile("pre.txt");

while (getline(userfile, line_once))
    {
        cout<<line_once;
    }


}

