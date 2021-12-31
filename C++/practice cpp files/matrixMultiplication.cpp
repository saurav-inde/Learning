#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int m, n, a, b;
    cout << "enter m and n for m x n matrix A: \n";
    cin >> m >> n;
    a =n;

    cout << "enter b for a x b matrix B: \n";
    cin>>b;

    int MAT_1[m][n];
    int MAT_2[a][b];
    int MAT_3[m][b];

    //populate matrixssss
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            MAT_1[i][j] = rand() % 12;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            MAT_2[i][j] = rand() % 12;
        }
    }

    /* # The code below, currently commented out can be used INSTEAD of above two for loops for mannual input.

cout<<"enter elements of 1st matrix\n";
for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>MAT_1[i][j];
        }
    }


    cout<<"Enter elements of 2nd matrix\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           cin>>MAT_2[i][j];
        }
    }

    
*/

   
    //multiplies matrix
    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < b; k++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {

                temp += MAT_1[i][j] * MAT_2[j][k];
            }
            MAT_3[i][k] = temp;
        }
    }

    // outputs matrix1
    cout << "   matrix A  ";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << setw(6) << MAT_1[i][j] << "  ";
        }
    }

    // outputs matrix2
    cout << "\n\n   matrix B  ";
    for (int i = 0; i < a; i++)
    {
        cout << "\n";
        for (int j = 0; j < b; j++)
        {
            cout << setw(6) << MAT_2[i][j] << "  ";
        }
    }

    // outputs matrix3
    cout << "\n\n   matrix C   ";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < b; j++)
        {
            cout << setw(6) << MAT_3[i][j] << "  ";
        }
    }

    return 0;
}