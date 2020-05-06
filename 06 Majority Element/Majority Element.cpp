class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;
        int mx = INT_MIN, value;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > mx)
                mx = mp[nums[i]], value = nums[i];
        }
        return value;
    }
};