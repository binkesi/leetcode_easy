# https://leetcode-cn.com/problems/excel-sheet-column-title/

class Solution:
    def convertToTitle(self, n: int) -> str:
        res = ""
        while n > 0:
            mod = (n - 1) % 26
            res = res + chr(mod + 65)
            n = (n - 1) // 26
        res = res[::-1]
        return res 


if __name__ == "__main__":
    pass