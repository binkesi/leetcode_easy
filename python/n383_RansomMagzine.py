# https://leetcode-cn.com/problems/ransom-note/submissions/
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        l1 = list(ransomNote)
        l2 = list(magazine)
        for i in l1:
            if i not in l2:
                return False
            else:
                l2.remove(i)
        return True
        

if __name__ == "__main__":
    pass        