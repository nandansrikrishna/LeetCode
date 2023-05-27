class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int currMax = 0, maxTillNow = INT_MIN;
        for (auto num : nums) {
            currMax = max(num, currMax + num);
            maxTillNow = max(maxTillNow, currMax);
        }
        return maxTillNow;
    }
};