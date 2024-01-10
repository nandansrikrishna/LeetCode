# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getLeaves(self, root: Optional[TreeNode]) -> [int]:
        if not root:
            return []
        if not (root.left or root.right):
            return [root.val]
        else:
            return self.getLeaves(root.left) + self.getLeaves(root.right)

    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        return self.getLeaves(root1) == self.getLeaves(root2)
