/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        size_t pos = haystack.find(needle); // size_t: unsigned type for index/size
        if (pos != string::npos)            // npos: special value = "not found"
        {
            return static_cast<int>(pos); // convert size_t → int (required return type)
        }
        else
        {
            return -1;
        }
    }
};

// @lc code=end
