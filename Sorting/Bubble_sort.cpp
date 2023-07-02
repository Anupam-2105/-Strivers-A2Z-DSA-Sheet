// Repeatedly swapping the adjacent elements if they are in the wrong order
// O(n^2)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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