/* program of 3d matrix */

#include <iostream>
#include<cmath>

using namespace std;


int main() {
    
// s decides the order of matrix 
 int s;
 cout<< "Enter matrix size: ";
 cin>>s;
 
 
// n decides the first and hence numbers at every 3d location
int n;
cout<< "Enter first number: ";
cin>>n;

//3d matrix defination
int mat[s][s][s];

//matrix setter
for(int i = 0; i < s; i++){
    for(int j = 0; j < s; j++){
        for(int k= 0; k < s; k++){
        mat[i][j][k] = n;
        n++;
        }
    }
}


//matrix output layer by layer
for(int a = 0; a < s; a++){
    cout<< "         layer "<< a+1 <<"\n\n";
    for(int b = 0; b < s; b++){
        for(int c = 0; c< s; c++){
            
        cout << mat[a][b][c]<< "     ";
        }
        cout << "\n";
    }
    cout<<"\n\n";
}
    return 0;
}