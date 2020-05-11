class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        map<int, int> judge;
        map<int, int> trust_cnt;
        vector<int> v;
        if (trust.size() == 0)
            return 1;
        for (int i = 0; i < trust.size(); i++)
        {
            judge[trust[i][0]]++;
            trust_cnt[trust[i][1]]++;
        }
        for (map<int, int>::iterator it = trust_cnt.begin(); it != trust_cnt.end(); it++)
        {
            if (it->second == N - 1)
                v.push_back(it->first);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (judge[v[i]] == 0)
                return v[i];
        }
        return -1;
    }
};