#include <bits/stdc++.h>
using namespace std;

int search(int A[], int N)
{
    int ans = 0;
    for (int i = 0; i < N; i++)
        ans ^= A[i];
    return ans;
}

int main()
{
    int arr[]{1, 1, 2, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, n) << endl;
}