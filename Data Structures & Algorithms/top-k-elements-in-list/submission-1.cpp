class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashf;

        for (const int num:nums) {
            hashf[num]++;
        }

        vector<pair<int, int>> freq(hashf.begin(), hashf.end());

        sort(freq.begin(), freq.end(),
            [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int> ans;

        for (int i = 0; i < k; ++i) {
            ans.push_back(freq[i].first);
        }

        return ans;

    }
};
