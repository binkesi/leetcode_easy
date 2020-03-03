# https://leetcode-cn.com/problems/is-subsequence/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = j = 0
        s1 = len(s)
        s2 = len(t)
        if s2 < s1: return False
        if s1 == 0: return True
        while i < s1:
            if j >= s2: return False
            while j < s2 and t[j] != s[i]:
                j += 1
                if j >= s2:
                    return False
            i += 1
            j += 1
        return True 
        

if __name__ == "__main__":
    pass
            
        