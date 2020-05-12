class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int x;
        if (nums.size() == 1)
            return nums[0];
        for (int i = 0; i < nums.size();)
        {
            if (nums[i] == nums[i + 1])
                i += 2;
            else
                x = nums[i], i++;
        }
        return x;
    }
};