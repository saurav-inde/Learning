#include<iostream>
#include<string>
using namespace std;

int main()
{
    std::string inpu ="ufjvb fkdk flv  4 *&^%mgkb ff vODIFGDFFMAS 346789 "
char inpp[500];
int  intt[500];
for (int i = 0; i < inpu.length(); i++)
{
    inpp[i] = (char)(inpu[i]);
}

for (int i = 0; i < inpu.length(); i++)
{
    intt[i] = (int)(inpp[i]) + 2000;
}

for (int i = 0; i < inpu.length(); i++)
{
    cout<<inpp[i]<<endl;
}

for (int i = 0; i < inpu.length(); i++)
{
    cout<<intt[i]<<endl;
}

    return 0;
}