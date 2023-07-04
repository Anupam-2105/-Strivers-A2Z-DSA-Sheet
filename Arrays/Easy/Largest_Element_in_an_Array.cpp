#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 1];
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << largest(arr, n) << endl;
}