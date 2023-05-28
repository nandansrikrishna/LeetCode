class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle) {
            return 0;
        }
        if (needle.size() > haystack.size()) {
            return -1;
        }
        int num_equal = 0;
        for (int i = 0; i < haystack.size() - needle.size() + 1; ++i) {
            for (int j = 0; j < needle.size(); ++j) {
                if (haystack[i + j] != needle[j]) {
                    goto skip;
                }
                else {
                    ++num_equal;
                }
            }
            if (needle.size() == num_equal) {
                return i;
            }
        skip:
            num_equal = 0;
        }
        return -1;
    }
};