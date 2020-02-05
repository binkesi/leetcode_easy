# https://leetcode-cn.com/problems/valid-palindrome/
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = [*filter(str.isalnum, s.lower())]
        return s == s[::-1]  
        
        
if __name__ == "__main__":
    pass