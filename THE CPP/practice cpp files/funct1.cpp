#include<iostream>
using namespace std;
void fibonachi(int t){
    int term1 = 0;
    int term2 = 1;
    int termNext;
    for (int n = 0; n <= t; n++)
    {
       termNext = term1 + term2;
       cout<<termNext<<endl;
       term1 = term2;
       term2= termNext;
    }
    

}
int main()
{
    cout<<"Enter number of terms: ";
    int totalTerms;
    cin>>totalTerms;



    fibonachi(totalTerms); 

    return 0;
}