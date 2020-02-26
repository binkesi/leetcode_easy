# https://leetcode-cn.com/problems/power-of-three/
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0: return False
        while n > 1 and n % 3 == 0:
            n = n / 3
        return n == 1


if __name__ == "__main__":
    solu = Solution()
    print(solu.isPowerOfThree(28))