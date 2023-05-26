class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority_element = nums[0];
        int count = 1;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                majority_element = nums[i];
                ++count;
            }
            else if (majority_element == nums[i]) {
                ++count;
            }
            else {
                --count;
            }
        }

        return majority_element;
    }
};