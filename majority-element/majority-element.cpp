class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (auto& i : nums) {
            freq[i]++;
        }
        
        int major_value = 0;
        int majority = 0;
        for (auto& i : freq) {
            if (i.second > majority) {
                major_value = i.first;
                majority = i.second;
            }
        }
        return major_value;
    }
};