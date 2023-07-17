// Brute Force

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    return {};
}



// Optimised Solution

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) == mp.end())
            mp[nums[i]] = i;
        else
            return {mp[target - nums[i]], i};
    }
    return {-1, -1};
}