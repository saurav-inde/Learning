#include<iostream>
using namespace std;


int main(){
int a =3, b = 2;

int matrix[a][b];

for (int i = 0; i < a*b; i++)
{
    cin >> matrix[int(i / b)][int(i%b)];
}

    
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<matrix[i][j]<<"  ";
    }
    cout<<endl;
}


    return 0;
}