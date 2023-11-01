# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def longestZigZag(self, root: Optional[TreeNode]) -> int:
        self.maxLength = 0
        def findZigZag(node, depth, prev):
            self.maxLength = max(self.maxLength, depth)
            if node.left is not None:
                if prev != 0:
                    findZigZag(node.left, depth + 1, 0)
                else:
                    findZigZag(node.left, 1, 0)
            if node.right is not None:
                if prev != 1:
                    findZigZag(node.right, depth + 1, 1)
                else:
                    findZigZag(node.right, 1, 1)

        findZigZag(root, 0, -1)
        return self.maxLength