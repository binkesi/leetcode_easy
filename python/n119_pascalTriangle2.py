# https://leetcode-cn.com/problems/pascals-triangle-ii/
class Solution:
    def getRow(self, rowIndex: int):
        if rowIndex == 0: return [1]
        last = self.getRow(rowIndex - 1)
        cur = [1]
        for i in range(len(last)-1):
            cur.append(last[i] + last[i+1])
        cur.append(1)
        return cur 
        
        
if __name__ == "__main__":
    pass