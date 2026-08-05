class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int rightToLeft = 1;
        vector<int> ans(len);

        ans[0] = 1;


        for (int i = 1; i < len; ++i) {
            ans[i] = ans[i-1] * nums[i-1];
        }

        for (int i = 0; i < len; ++i) {
            ans[len-i-1] = ans[len-i-1] * rightToLeft;
            rightToLeft *= nums[len-i-1];
        }

        return ans;

    }
};