class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) {
            return 0;
        }

        int ind=0;
        int chain = 1;
        int ans = 1;

        sort(nums.begin(), nums.end());


        for (int i = 0 ; i < nums.size() - 1; ++i) {
            if (nums[i+1] - nums[i] == 1) {
                chain++;
            }
            else if (nums[i+1] - nums[i] == 0) {
                continue;
            }
            else {

                if (chain > ans) {
                    ans = chain;
                }

                chain = 1;

            }
        }

        if (chain > ans) {
            ans = chain;
        }

        return ans;

    }
};
