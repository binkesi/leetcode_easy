# https://leetcode-cn.com/problems/path-sum-iii/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def pathSum(self, root: TreeNode, sum: int) -> int:
        if root is None: return 0
        return self.rootSum(root, sum) + self.pathSum(root.left, sum) + self.pathSum(root.right, sum)

    def rootSum(self, root: TreeNode, sum: int) -> int:
        if root is None: return 0
        return (1 if sum - root.val == 0 else 0) + self.rootSum(root.left, sum-root.val) + self.rootSum(root.right, sum-root.val)
        
        
if __name__ == "__main__":
    pass         