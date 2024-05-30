class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if (len(nums) == 1):
            return nums[0]

        max_sum = nums[0]
        curr_sum = 0
        ptr = 0
        while (ptr < len(nums)):
            curr_sum += nums[ptr]
            if (curr_sum > max_sum):
                max_sum = curr_sum

            if (curr_sum < 0):
                curr_sum = 0
            
            ptr += 1

        return max_sum