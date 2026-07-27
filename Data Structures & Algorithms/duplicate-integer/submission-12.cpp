class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();

        for (int ind = 0; ind < len - 1; ++ind) {
            for (int j = ind + 1; j < len; ++j) {
                if (nums[ind] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};