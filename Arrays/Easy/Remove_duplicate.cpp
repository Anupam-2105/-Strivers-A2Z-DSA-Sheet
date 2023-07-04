#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int a[], int n)
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[cnt] != a[i])
        {
            cnt++;
            a[cnt] = a[i];
        }
    }
    return cnt + 1;
}

int main()
{
    int arr[]{1,1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << removeDuplicate(arr, n) << endl;
}