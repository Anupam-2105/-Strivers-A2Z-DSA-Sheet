// Brute Force

int majorityElement(vector<int> &nums)
{
    map<int, int> mp;
    for (auto it : nums)
    {
        mp[it]++;
    }
    int ans;
    for (auto it : mp)
    {
        if (it.second > nums.size() / 2)
        {
            ans = it.first;
        }
    }
    return ans; 
}



// Optimised Solution

int majorityElement(vector<int> &nums)
{
    int temp = nums[0], cnt = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            cnt++;
            temp = nums[i];
        }
        else if (temp == nums[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return temp;
}