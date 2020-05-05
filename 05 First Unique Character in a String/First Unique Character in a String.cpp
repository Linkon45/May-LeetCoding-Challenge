class Solution
{
public:
    int firstUniqChar(string s)
    {
        queue<pair<char, int>> q;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] == 1)
                q.push({s[i], i});
        }
        while (!q.empty())
        {
            pair<char, int> p = q.front();
            if (mp[p.first] == 1)
                return p.second;
            else
                q.pop();
        }
        return -1;
    }
};