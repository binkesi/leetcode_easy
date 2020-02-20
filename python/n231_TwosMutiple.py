# https://leetcode-cn.com/problems/power-of-two/
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0: return False
        if n == 1: return True
        while n > 1:
            if n % 2 != 0:
                return False
            n = n // 2
        return True
        
    def isPowerOfTwo_a(self, n: int) -> bool:
        if n <= 0: return False
        return n == n & (-n)


if __name__ == "__main__":
    solu = Solution()
    print(solu.isPowerOfTwo(64))
    print(solu.isPowerOfTwo_a(64))