// The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
// O(n^2)

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
}