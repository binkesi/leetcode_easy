# https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal/
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

class Solution:
    def __init__(self):
        self.order_list = []
        
    def postorder(self, root: 'Node'):
        if root is None: return
        if root.children is not None:
            for child in root.children:
                self.postorder(child)        
        self.order_list.append(root.val)
        return self.order_list


if __name__ == "__main__":
    pass          
        