# https://leetcode-cn.com/problems/symmetric-tree/
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def isReverse(arr: list) -> bool:
    return arr[::-1] == arr

class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        valueQueue = []
        if root: valueQueue = [root.val]
        nodeQueue = [root]
        while nodeQueue:
            for i in range(len(nodeQueue)):
                node = nodeQueue.pop(0)
                if valueQueue: valueQueue.pop(0)
                if node:
                    nodeQueue.append(node.left)
                    if node.left: valueQueue.append(node.left.val)
                    else: valueQueue.append(None)
                    nodeQueue.append(node.right)
                    if node.right: valueQueue.append(node.right.val)
                    else: valueQueue.append(None)
            if not isReverse(valueQueue):
                return False
        return True  
        
        
if __name__ == "__main__":
    arr = [1, None, 1, None]
    print(arr.pop(0))
    print(arr)