#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> arr, ans;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        arr.push_back(arr2[i]);
    }
    sort(arr.begin(), arr.end());
    ans.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    int n = 5, arr1[] = {1, 2, 3, 4, 5};
    int m = 3, arr2[] = {1, 2, 3};
    vector<int> ans = findUnion(arr1, arr2, n, m);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}