#include <iostream>
#include<cmath>
using namespace std;

int main()
{

cout<<"enter the number: ";
int number;
cin>>number;
for (int i = 2; i <= sqrt(number); i++)
{
    if(number % i == 0){
        cout<<"number is not prime"<< " as it is divisible by "<< i<<endl;
        break;
    }
    else if(i == int(sqrt(number))){
        cout<<"number is prime";
    }
}

    return 0;
}
