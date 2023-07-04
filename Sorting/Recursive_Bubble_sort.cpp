// Repeatedly swapping the adjacent elements if they are in the wrong order
// O(n^2)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
}