# https://leetcode-cn.com/problems/find-mode-in-binary-search-tree/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def findMode(self, root: TreeNode):
        lis = []
        if root is None: return lis
        self.TransTree(root, lis)
        res = []
        max_num = 0
        cur_num = 1
        l = len(lis)
        for i in range(1, l+1):
            if i == l or lis[i] != lis[i-1]:
                if cur_num > max_num:
                    res.clear()
                    res.append(lis[i-1])
                    max_num = cur_num
                elif cur_num == max_num:
                    res.append(lis[i-1])
                cur_num = 1
            else:
                cur_num += 1
        return res                
    
    def TransTree(self, root: TreeNode, lis):
        if root is None: return
        self.TransTree(root.left, lis)
        lis.append(root.val)
        self.TransTree(root.right, lis)
        


if __name__ == "__main__":
    pass
        