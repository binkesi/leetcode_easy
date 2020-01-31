# https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def sortedArrayToBST(self, nums) -> TreeNode:
        if not nums:
            return None
        mid = len(nums) // 2
        node = TreeNode(nums[mid])
        left = nums[:mid]
        right = nums[mid+1:]
        node.left = self.sortedArrayToBST(left)
        node.right = self.sortedArrayToBST(right)
        return node
        
    def levelPrint(self, node):
        if node is None:
            print("null")
            return
        print(node.val)
        self.levelPrint(node.left)
        self.levelPrint(node.right)
        
if __name__ == "__main__":
    nums = [-10,-3,0,5,9]
    solu = Solution()
    solu.levelPrint(solu.sortedArrayToBST(nums))
    