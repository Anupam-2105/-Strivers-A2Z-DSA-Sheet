#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &nums)
{
    int cnt = 0, cnt1 = 0;
    for (auto it : nums)
    {
        if (it == 1)
        {
            cnt++;
        }
        else
        {
            cnt1 = max(cnt1, cnt);
            cnt = 0;
        }
    }
    return max(cnt, cnt1);
}

int main()
{
    vector<int> nums{1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << longestOnes(nums) << endl;
    ;
}
