#include <bits/stdc++.h>
using namespace std;

int findZeroes(int arr[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            m--;
        }
        if (m < 0)
        {
            if (arr[j] == 0)
            {
                m++;
            }
            j++;
        }
        i++;
    }
    return i - j;
}

int main()
{
    int arr[]{1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << findZeroes(arr, n, m) << endl;
}