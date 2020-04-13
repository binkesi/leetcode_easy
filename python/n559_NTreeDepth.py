# https://leetcode-cn.com/problems/maximum-depth-of-n-ary-tree/
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

class Solution:
    def __init__(self):
        self.depth = 0
        self.queue = []
        
    def maxDepth(self, root: 'Node') -> int:
        if root is None: return 0
        tmp_queue = []
        tmp_queue.append(root)
        self.queue.append(tmp_queue)
        while len(self.queue[0]) != 0:
            tmp_queue = []
            for node in self.queue[0]:
                if node is None or len(node.children) == 0:
                    continue
                for i in node.children:
                    tmp_queue.append(i)
            self.queue.append(tmp_queue)
            self.queue.pop(0)
            self.depth += 1
        return self.depth
        
    def maxDepth_a(self, root: 'Node'):
        if root is None: return 0
        if root.children == []: return 1
        height = [self.maxDepth_a(node) for node in root.children]
        return max(height) + 1
        

if __name__ == "__main__":
    pass
            