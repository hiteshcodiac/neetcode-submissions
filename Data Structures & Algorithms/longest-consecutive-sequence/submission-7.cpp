class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) {
            return 0;
        }

        vector<int> ansV = nums;
        int ind=0;
        int chain = 1;
        int ans = 1;

        sort(ansV.begin(), ansV.end());


        for (int i = 0 ; i < nums.size() - 1; ++i) {
            if (ansV[i+1] - ansV[i] == 1) {
                chain++;
            }
            else if (ansV[i+1] - ansV[i] == 0) {
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
