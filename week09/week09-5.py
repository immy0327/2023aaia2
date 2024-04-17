# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        # 要做對照表,把0..25對照字母'a'..'z'
        table = "abcdefghijklmnopqrstuvwxyz" #字母對照表
        def helper(root, nowStr):
            nextStr = table[root.val] + nowStr
            if root.left==None and root.right==None: return nextStr
            if root.left==None: return helper(root.right, nextStr)
            if root.right==None: return helper(root.left, nextStr)
            left = helper(root.left, nextStr)
            right =  helper(root.right, nextStr)
            return min(left, right)
        return helper(root, '') 