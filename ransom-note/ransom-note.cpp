class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransom;
        for (auto i : ransomNote) {
            ransom[i]++; 
        }
        for (auto i : magazine) {
            ransom[i]--;
        }
        for (auto i : ransom) {
            if (i.second > 0) {
                return false;
            }
        }
        return true;
    }
};