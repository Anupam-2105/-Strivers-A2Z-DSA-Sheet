#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 2];
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargest(arr, n) << endl;
}