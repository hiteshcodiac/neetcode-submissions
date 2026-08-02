class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len);
        int product = 1;
        int noZer = 0;

        for (int i = 0; i < len; i++) {
            if (nums[i] != 0) {
                product *= nums[i];
            }
            else if (noZer == 0) {

                noZer = 1;

            }
            else if (noZer == 1) {

                noZer = 2;
                
            }
        }

        if (noZer == 0) {

            for (int i = 0; i < len; ++i) {
                ans[i] = product/nums[i];
            }

        }
        else if (noZer == 1) {

            for (int i=0; i< len; ++i) {
                if (nums[i] != 0) {
                    ans[i] = 0;
                }
                else {
                    ans[i] = product;
                }
            }

        }

        return ans;

    }
};
