class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if (strs.empty()) return {};

        int len = strs.size();
        int j = 0;
        vector<vector<string>> out(len);
        vector<pair<string, int>> A;

        for (int i = 0; i < len; ++i) {
            A.push_back({strs[i], i});
            sort(A[i].first.begin(), A[i].first.end());
        }

        sort(A.begin(), A.end());

        for (int i = 0; i <= len - 2; ++i) {

            out[j].push_back(strs[A[i].second]);

            if (A[i + 1].first != A[i].first) {
                j++;
            }

        }

        out[j].push_back(strs[A[len - 1].second]);

        out.resize(j + 1);

        return out;
    }
};