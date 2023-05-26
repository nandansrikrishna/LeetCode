class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> vault;

        for (auto& num : nums) {
            if (vault[num]++ == 1) {
                return true;
            }
        }
        return false;
    }
};