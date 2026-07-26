class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        int x;
        int y;
        if (len >= 2) {
            x=0;
            y=1;
        }
        else {
            return false;
        }

        while (true) {

            if (nums[x] == nums[y]) {
                return true;
            }

            y++;

            if (x <= len - 3 and y == len) {
                x++;
                y = x + 1;
            }
            else if (x == len - 2 and y == len) {
                return false;
            }

        }
    }
};