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
        
    def getRow_a(self, rowIndex: int):
        res = [1]
        for i in range(1, rowIndex+1):
            res.insert(0, 0)
            for j in range(i):
                res[j] = res[j] + res[j+1]
        return res
        
        
if __name__ == "__main__":
    pass