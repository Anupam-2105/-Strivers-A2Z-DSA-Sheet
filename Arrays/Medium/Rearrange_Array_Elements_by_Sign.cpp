// Brute force

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> a;
    vector<int> b;
    for (int x : nums)
    {
        if (x >= 0)
        {
            a.push_back(x);
        }
        else
        {
            b.push_back(x);
        }
    }
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n / 2; i++)
    {
        ans.push_back(a[i]);
        ans.push_back(b[i]);
    }
    return ans;
}



// Optimised Solution

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for (int it : nums)
    {
        if (it > 0)
        {
            ans[pos] = it;
            pos += 2;
        }
        else
        {
            ans[neg] = it;
            neg += 2;
        }
    }
    return ans;
}