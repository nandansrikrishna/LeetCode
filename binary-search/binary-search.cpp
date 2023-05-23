class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower = 0;
        int upper = nums.size() - 1;

        while (lower <= upper) {
            int curr = lower + (upper - lower) / 2;
            if (nums[curr] == target) {
                return curr;
            }
            else if (nums[curr] > target) {
                upper = curr - 1;
            }
            else {
                lower = curr + 1;
            }
        }

        return -1;
    }
};