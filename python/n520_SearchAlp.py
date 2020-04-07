# https://leetcode-cn.com/problems/detect-capital/
class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word[0:1].isupper():
            if word[1:].islower() or word[1:].isupper() or len(word) == 1: return True
            return False
        if word.islower(): return True
        return False 
        

if __name__ == "__main__":
    pass       
            