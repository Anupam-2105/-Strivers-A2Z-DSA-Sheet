#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k)
{
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]{12, 3, 2, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout <<search(arr,n,k)<< endl;
}