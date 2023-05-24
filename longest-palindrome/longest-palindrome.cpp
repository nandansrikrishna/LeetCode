class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        for (int i = 0; i < s.length(); ++i) {
            map[s[i]]++;
        }

        bool odd_value = false;
        int length = 0;

        for (auto& i : map) {
            if (i.second % 2 == 0) {
                length += i.second;
            } 
            else {
                length += i.second -1;
                odd_value = true;
            }
        }

        if (odd_value) {
            ++length;
        }

        return length;


    }
};