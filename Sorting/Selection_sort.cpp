//Repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part
//O(n^2)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int mini, temp;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

int main()
{
    int arr[]{5, 1, 6, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
}