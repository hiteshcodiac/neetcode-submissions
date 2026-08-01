class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> leftToRight(len);
        vector<int> rightToLeft(len);
        vector<int> ans(len);

        leftToRight[0] = 1;
        rightToLeft[len-1] = 1;

        for (int i = 1; i < len; ++i) {
            leftToRight[i] = leftToRight[i-1] * nums[i-1];
            rightToLeft[len-i-1] = rightToLeft[len-i] * nums[len-i];
        }

        for (int i = 0; i < len; ++i) {
            ans[i] = leftToRight[i] * rightToLeft[i];
        }

        return ans;

    }
};