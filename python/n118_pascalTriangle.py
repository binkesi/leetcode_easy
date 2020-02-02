# https://leetcode-cn.com/problems/pascals-triangle/
class Solution:
    def generate(self, numRows: int):
        if numRows == 0:
            return None
        if numRows == 1: 
            tRow = [[1]]
            return tRow
        last = self.generate(numRows-1)
        last_arr = last[-1]       
        cur = [1]
        if numRows >= 2:
            for i in range(len(last_arr)-1):
                cur.append(last_arr[i] + last_arr[i+1])
        cur.append(1)
        last.append(cur)  
        return last
        
        
if __name__ == "__main__":
    pass