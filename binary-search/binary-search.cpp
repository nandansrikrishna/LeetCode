class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int partition = (left + right) / 2;

        while (left <= right) {
            if (nums[partition] > target) {
                right = partition - 1;
                partition = (left + right) / 2;
            }
            else if (nums[partition] < target) {
                left = partition + 1;
                partition = (left + right) / 2;
            }
            else {
                return partition;
            }
        }

        return -1;
    }
};