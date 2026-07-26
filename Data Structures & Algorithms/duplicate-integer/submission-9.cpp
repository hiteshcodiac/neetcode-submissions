class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        
        for (int ind = 0; ind < len - 1; ++ind) {

            int sum = nums[ind + 1] - nums[ind];

            for (int j = 1; (j < (len - ind - 1)) && sum != 0 ; ++j) {
                sum += nums[ind + j + 1] - nums[ind + j];
            }

            if (sum == 0) {
                return true;
            }

        }

        return false;

    }
};