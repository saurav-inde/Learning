#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int array[10];
    int arrayCopy[10];
    int min = INT_MIN;
    int max = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        array[i] =  rand()%1000;

    }

    for (int j = 0; j <10; j++)
    {
        min = min(min, array[j])
    }
    
    
    return 0;
}