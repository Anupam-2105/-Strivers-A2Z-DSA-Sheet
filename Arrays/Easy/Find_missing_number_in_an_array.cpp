#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int arr[N + 1] = {0};
    for (int i = 0; i < N - 1; i++)
    {
        arr[A[i]] = A[i];
    }
    for (int i = 1; i < N ; i++)
    {
        if (arr[i] == 0)
        {
            return i;
        }
    }
}

int main()
{
    int arr[]{1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << missingNumber(arr, n) << endl;
}