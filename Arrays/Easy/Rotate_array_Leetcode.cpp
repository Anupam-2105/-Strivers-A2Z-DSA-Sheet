#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + (nums.size() - k));
    reverse(nums.begin() + (nums.size() - k), nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
}