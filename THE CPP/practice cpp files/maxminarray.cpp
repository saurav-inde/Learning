#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "Enter array size: ";
    int n;
    cin >> n;
    int nums[n];

    int maxx = INT_MIN;
    int minn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        nums[i] = rand() % 10000;
    }

    for (int j = 0; j < n; j++)
    {
        maxx = max(nums[j], maxx);
        minn = min(nums[j], minn);
    }

    cout << "Max in array: " << maxx << endl;
    cout << "min in array: " << minn << endl;
    return 0;
}