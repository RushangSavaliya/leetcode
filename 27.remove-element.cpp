/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size(); // effective size of the array
        int i = 0;           // index pointer
        while (i < n)
        {
            if (nums[i] == val)
            {
                // Replace current element with the last valid element.
                // This may bring another 'val' into position i, so we do not increment i here.
                nums[i] = nums[n - 1];
                n--; // reduce the effective size (ignore the last element now)
            }
            else
            {
                // Current element is valid, move to the next index
                i++;
            }
        }
        // 'n' is the new length of the array with all non-val elements in the first n positions
        return n;
    }
};
// @lc code=end
