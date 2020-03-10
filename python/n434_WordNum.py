# https://leetcode-cn.com/problems/number-of-segments-in-a-string/
class Solution:
    def countSegments(self, s: str) -> int:
        if not s: return 0
        tmp = s + " "
        res = 0
        for i in range(0, len(tmp)-1):
            if tmp[i] != ' ' and tmp[i+1] == ' ':
                res += 1
        return res
        
if __name__ == "__main__":
    pass        