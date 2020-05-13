class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> s;
        for (int i = 0; i < num.size(); i++)
        {
            while (!s.empty() && k > 0 && num[i] < s.top())
                s.pop(), k--;
            if (!s.empty() || num[i] != '0')
                s.push(num[i]);
        }
        while (!s.empty() && k != 0)
            s.pop(), k--;
        if (s.empty())
            return "0";
        string str = "";
        while (!s.empty())
        {
            str += s.top();
            s.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};