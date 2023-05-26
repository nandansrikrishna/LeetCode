class Solution {
public:
    string decipher(string s) {
        int curr = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '#') {
                curr = max(0, --curr);
            }
            else {
                s[curr++] = s[i];
            }
        }
        return s.substr(0,curr);
    }
    bool backspaceCompare(string s, string t) {
        return decipher(s) == decipher(t);
    }
};