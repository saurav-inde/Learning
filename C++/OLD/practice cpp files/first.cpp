#include<iostream>
using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;

if(a> b){

    if(a>c){
        cout<<"Largest integer is "<<a;
    }
    else{
    cout<<"Largest integer is "<<c;
    }
}

else{
    if(b>c){
        cout<<"Largest integer is "<<b;
    }
    else{
        cout<<"Largest integer is "<<c;
    }
  
}

//std::getchar();
    return 0;
}