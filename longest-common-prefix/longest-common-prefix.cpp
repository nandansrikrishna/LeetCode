class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string compare = "";
        string common = "";
        for (int i = 1; i < strs[0].size() + 1; ++i) {
            compare = strs[0].substr(0,i);
            bool valid = true;
            for (int j = 1; j < strs.size(); ++j) {
                if (compare != strs[j].substr(0,i)) {
                    valid = false;
                }
            }
            if (valid) {
                common = compare;
            }
        }   
        return common;
    }
};