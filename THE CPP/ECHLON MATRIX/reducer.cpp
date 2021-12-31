#include <iostream>
//using namespace std;

int main()
{

    //matrix order
    int a, b;
    std::cout << "Enter row space column: ";
    std::cin >> a >> b;

    //matrix initialization
 int matrix[a][b];

    //matrix assignment
    for (int temp_i = 0; temp_i < a; temp_i++)
    {
        int temp_j = 0;
        while (temp_j < b)
        {
            std::cin >> matrix[temp_i][temp_j];
            temp_j++;
        }
    }

    //matrix print for debugging
    for (int temp_i = 0; temp_i < a; temp_i++)
    {
        int temp_j = 0;
        while (temp_j < b)
        {
            std::cout << matrix[temp_i][temp_j] << " ";
            temp_j++;
        }
        std::cout << std::endl;
    }

    //checks if the matrix is convertible to echlon form or not
    if (matrix[0][0] == 0)
    {
        std::cout << "matrix has first element 0";
        return 0;
    }

    //reducer algorithm
    for (int i = 1; i < a; i++)
    {
        if (matrix[i][i - 1] == 0)
        {

            continue;
        }
        //
        else
        {
            //std::cout << "ulla ";
        }
    }



    //matrix print for debugging
    for (int temp_i = 0; temp_i < a; temp_i++)
    {
        int temp_j = 0;
        while (temp_j < b)
        {
            std::cout << matrix[temp_i][temp_j] << " ";
            temp_j++;
        }
        std::cout << std::endl;
    }

    return 0;
}