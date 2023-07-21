int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int max = nums[0];
    for (int it : nums)
    {
        sum += it;
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    return max;
}