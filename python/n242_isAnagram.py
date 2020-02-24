# https://leetcode-cn.com/problems/valid-anagram/
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l = list(s)
        l.sort()
        s = "".join(l)
        l = list(t)
        l.sort()
        t = "".join(l)
        return s == t
        
        
if __name__ == "__main__":
    solu = Solution()
    s = "anagram"
    t = "nargama"
    print(solu.isAnagram(s, t))
        