/* program of 3d matrix */

#include <iostream>
#include<cmath>

using namespace std;


int main() {
    
// s decides the order of matrix 
 int s;
 cout<< "Enter matrix size: ";
 cin>>s;
 
 
 
 
 int q = 0;
 int r = 0;
 
 
 
 
 
 
// n decides the first and hence numbers at every 3d location
int n;
cout<< "Enter first number: ";
cin>>n;

int expression;

//3d matrix defination
int mat[s][s][s];

//matrix setter
for(int i = 0; i < s; i++){
    for(int j = 0; j < s; j++){
        for(int k= 0; k < s; k++){
            
            
       expression = n*(n-1) % n+1;
     //  cout << expression<< endl;
       if(expression == 0) {
        mat[i][j][k] = 1;
        cout << n << endl;
        }
        else{
        mat[i][j][k] = 0;
        }
        
        
        n++;
        }
    }
}



for(int a = 0; a < s; a++){
    //cout<< "         layer "<< a+1 <<"\n\n";
    for(int b = 0; b < s; b++){
        for(int c = 0; c< s; c++){
       
                 
        if(mat[a][b][c] ==0){
            q++;
            
        }
        else{
            r++;
        }
        
      
        }
    }
}

cout<< "no of time expression true: "<< r << " i.e. "<<(r*100)/(q+r) << " pc \n";
cout <<"not true: " <<q<<" i.e.  "<< 100 - (r*100)/(q+r)<< " pc \n";

    return 0;
}


/*
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
*/