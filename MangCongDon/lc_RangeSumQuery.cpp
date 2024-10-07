class lc_RangeSumQuery
{
private:
    vector<int> prefix;

public:
    lc_RangeSumQuery(vector<int> nums)
    {
        prefix.push_back(nuns[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            prefix.push_back(prefix.back() + nums[i]);
        }
    }

    int sumRange(int l, int r)
    {
        return prefix[r] - prefix[l - 1];
    }
};