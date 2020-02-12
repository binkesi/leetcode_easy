# https://leetcode-cn.com/problems/excel-sheet-column-number/solution/

class Solution:
    def titleToNumber(self, s: str) -> int:
        return sum([(ord(s[i])-64)* 26 ** (len(s)-i-1) for i in range(len(s))])
        
        
if __name__ == "__main__":
    pass