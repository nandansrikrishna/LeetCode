class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for (int i = 0; i < n + 1; ++i) { 
            int curr = i;
            int num = 0;

            while (curr != 0) {
                num += curr%2;
                curr /= 2;
            }

            ans.push_back(num);
        }
        return ans;
    }
};