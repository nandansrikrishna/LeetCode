class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit = 0;
        for (auto& num : nums) {
            bit ^= num;
        }
        return bit;
    }
};