class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        unordered_map<int, int> vault;

        for (auto& num : nums) {
            if (vault[num]++ == 1) {
                return true;
            }
        }
        return false;
    }
};