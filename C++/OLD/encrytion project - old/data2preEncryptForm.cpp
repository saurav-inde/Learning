#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
int derived_add = 100;
  std::string line_once;
  char line2chars[500];
  int chars2int[500];
  //pre encrypter to file

  ifstream userfile("userwritten.txt");

  ofstream prefile("pre.txt");

  while (getline(userfile, line_once))
  {

    for (int i = 0; i < line_once.length(); i++)
    {
      chars2int[i] = (int)((char)(line_once[i])) + derived_add;
    }

    //it apends that array to pre.txt
    std::ofstream outfile;
    outfile.open("pre.txt", std::ios_base::app); // append instead of overwrite

    for (int i = 0; i < line_once.length(); i++)
    {
      outfile << chars2int[i];
    }
    outfile<<endl;
    //outfile<<"000";
    outfile.close();

    //all elements of pre arry 0
    for (int i = 0; i < 500; i++)
    {
      chars2int[i] = 0;
    }
  }
cout<<"Data converted to pre encryption format.";
  return 0;
}