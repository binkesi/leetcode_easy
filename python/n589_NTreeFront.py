# https://leetcode-cn.com/problems/n-ary-tree-preorder-traversal/
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

class Solution:
    def __init__(self):
        self.order_list = []
        
    def preorder(self, root: 'Node'):
        if root is None: return
        self.order_list.append(root.val)
        for child in root.children:
            self.preorder(child)
        return self.order_list
        

if __name__ == "__main__":
    pass          