# https://leetcode-cn.com/problems/construct-string-from-binary-tree/submissions/
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def __init__(self):
        self._t_str = ""

    def tree2str(self, t: TreeNode):
        if t is None: 
            #self._t_str += "()"
            return ""
        self._t_str += str(t.val)
        if t.right is not None:
            self._t_str += '('
            self.tree2str(t.left)
            self._t_str += ')'
            self._t_str += '('
            self.tree2str(t.right)
            self._t_str += ')'
        elif t.left is not None:
            self._t_str += '('
            self.tree2str(t.left)
            self._t_str += ')'
        return self._t_str
        
 
if __name__ == "__main__":
    pass