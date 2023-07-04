// The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
// O(n^2)

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    if (n <= 1){
        return;
    }

    insertionSort(arr, n - 1);

    int l = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > l)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = l;
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