/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int diameter = -1;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        recursive_diameter(root);
        return diameter;
    }
    int recursive_diameter(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int left_height = recursive_diameter(root->left);
        int right_height = recursive_diameter(root->right);
        diameter = max(diameter, left_height + right_height);
        return max(left_height, right_height) + 1;
    }
};