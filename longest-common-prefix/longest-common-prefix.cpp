class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int curr = 0;
        for (int i = 0; i < strs[0].size(); ++i) {
            for (int j = 0; j < strs.size() - 1; ++j) {
                if (strs[j][curr] != strs[j + 1][curr]) {
                    goto exit;
                }
            }
            ++curr;
        }

    exit:
        return strs[0].substr(0, curr);
    }
};