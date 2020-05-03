class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        map<char, int> mp;
        for (int i = 0; i < S.size(); i++)
            mp[S[i]]++;
        int cnt = 0;
        for (int i = 0; i < J.size(); i++)
            cnt += mp[J[i]];
        return cnt;
    }
};