#include<iostream>
using namespace std;


int main(){

    int len =0;
    cin>>len;
    int len_copy =len;
    long long int product =1;

    while (len--)
    {
        int temp;
        cin>>temp;
        product *= temp ;
        if (!((len_copy - len-1) % 3))
        {
           product = product % (1000000007);
        }
        
    }
    
    cout<< product;




    return 0;
}