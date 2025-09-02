/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        int lastUniqueIndex = 0; // index of the last unique number

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[lastUniqueIndex])
            {
                ++lastUniqueIndex;
                nums[lastUniqueIndex] = nums[i]; // move new unique number forward
            }
        }

        return lastUniqueIndex + 1; // number of unique elements
    }
};

// @lc code=end
