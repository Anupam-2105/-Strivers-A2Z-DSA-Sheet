#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    int l = 0, r = 0;
    while (r < n)
    {
        if (arr[r] != 0)
        {
            swap(arr[l], arr[r]);
            l++;
        }
        r++;
    }
}

int main()
{
    int arr[]{3, 5, 0, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    pushZerosToEnd(arr, n);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}