# https://leetcode-cn.com/problems/palindrome-number/
class Solution:
    def isPalindrome(self, x: int) -> bool:
        y = str(x)
        if y == y[::-1]:
            return True
        else:
            return False
            
    def isPalindrome_nostr(self, x: int) -> bool:
        if x < 0:
            return False
        y, res = x, 0
        while y != 0:
            res = res * 10 + y % 10
            y //= 10
        if x == res:
            return True
        else:
            return False

if __name__ == "__main__":
    solu = Solution()
    print(solu.isPalindrome(12321))
    print(solu.isPalindrome_nostr(123521))