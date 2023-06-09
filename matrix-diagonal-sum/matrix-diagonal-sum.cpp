class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        int sum = 0;

        for (int i = 0; i < size; ++i) {
            sum += mat[i][i];
            if (size - 1 - i != i) {
                sum += mat[size - 1 - i][i];
            }
        } 

        return sum;
    }
};