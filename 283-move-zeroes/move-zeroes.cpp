class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t size = nums.size();
        // while (nums[0] == 0 && nums.size()) {
        //     nums.erase(nums.begin());
        // }
        for (int i = 0; i < nums.size(); ++i) {
            while (nums[i] == 0 && nums.size() - i) {
                nums.erase(nums.begin() + i);
            }
            // if (nums[i] == 0) {
            //     nums.erase(nums.begin() + i);
            // }
        }
        size -= nums.size();
        for (int i = 0; i < size; ++i) {
            nums.push_back(0);
        }
    }
};