class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        ans.resize(2*n);
        for (int i=0; i < n/2+1; ++i) {
            ans[n+i] = nums[i];
            ans[2*n-1-i] = nums[n-1-i];
        }
        return ans;
    }
};