#define ll long long
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        ll low = 1, high = 100000;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            ll sq = mid * mid;
            if (sq == num)
                return true;
            else if (sq > num)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};