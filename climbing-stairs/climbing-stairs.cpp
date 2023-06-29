class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo;
        memo.resize(n + 1);

        if (n == 1) {
            return 1;
        }

        if (n == 2) {
            return 2;
        }
        
        memo[1] = 1;
        memo[2] = 2;


        for (int i = 3; i <= n; i++) {
            memo[i] = memo[i-2] + memo[i - 1];
        }

        return memo[n];
    }
};