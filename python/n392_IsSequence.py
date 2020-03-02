# https://leetcode-cn.com/problems/is-subsequence/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) == 0: return True
        l1 = len(s)-1
        l2 = len(t)-1
        i = j = 0
        while j <= l2:
            if i > l1:
                return True
            cur = s[i]
            while j <= l2 and t[j] != cur:
                j += 1
            j += 1
            i += 1
        return False 
            
        