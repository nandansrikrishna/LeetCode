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
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int max = 0;
        std::queue<TreeNode*> level_queue;
        level_queue.push(root);

        while (!level_queue.empty()) 
        {
            TreeNode *top = level_queue.front();
            level_queue.pop();
            int diameter = 0;
            diameter += height(top->left);
            diameter += height(top->right);
            if (diameter > max) {
                max = diameter;
            }
            if (top->left != NULL) {
                level_queue.push(top->left);
            }
            if (top->right != NULL) {
                level_queue.push(top->right);
            }
        }
        return max;
    }
    int height(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height, right_height) + 1;
    }
};