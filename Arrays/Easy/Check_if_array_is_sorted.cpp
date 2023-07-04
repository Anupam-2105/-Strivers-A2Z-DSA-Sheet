#include <bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arraySortedOrNot(arr, n) << endl;
}