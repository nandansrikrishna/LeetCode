class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_res = "";
        string t_res = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '#') {
                if (!s_res.empty()) {
                    s_res.pop_back();
                }
            }
            else {
                s_res += s[i];
            }
        } 
        cout << s_res << endl;
        for (int i = 0; i < t.size(); ++i) {
            if (t[i] == '#') {
                if (!t_res.empty()) {
                    t_res.pop_back();
                }
            }
            else {
                t_res += t[i];
            }
        } 
        //cout << r_res << endl;
        if (s_res == t_res) {
            return true;
        }
        else {
            return false;
        }
    }
};