# https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def getMinimumDifference(self, root: TreeNode) -> int:
        res = []
        self.getList(root, res)
        if len(res) == 1: return 0
        min_res = res[1] - res[0]
        for i in range(2, len(res)):
            if res[i] - res[i-1] < min_res:
                min_res = res[i] - res[i-1]
        return min_res
        
    def getList(self, root, res):
        if root is None: return
        self.getList(root.left, res)
        res.append(root.val)
        self.getList(root.right, res)
        

if __name__ == "__main__":
    pass            