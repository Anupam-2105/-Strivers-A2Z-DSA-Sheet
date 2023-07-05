#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k)
{
    k %= n;
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    rotate(arr, n, k);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}