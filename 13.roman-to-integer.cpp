/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{

public:
    int romanToInt(string s)
    {
        int total = 0, prev = 0;

        for (int i = s.size() - 1; i >= 0; --i)
        {
            int curr;
            switch (s[i])
            {
            case 'I':
                curr = 1;
                break;
            case 'V':
                curr = 5;
                break;
            case 'X':
                curr = 10;
                break;
            case 'L':
                curr = 50;
                break;
            case 'C':
                curr = 100;
                break;
            case 'D':
                curr = 500;
                break;
            case 'M':
                curr = 1000;
                break;
            default:
                curr = 0;
                break;
            }

            total += (curr < prev) ? -curr : curr;
            prev = curr;
        }

        return total;
    }
};
// @lc code=end
