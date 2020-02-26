# https://leetcode-cn.com/problems/power-of-four/
class Solution:
    def isPowerOfThree(self, num: int) -> bool:
        if num <= 0: return False
        while num > 1 and num % 4 == 0:
            num = num / 4
        return num == 1


if __name__ == "__main__":
    solu = Solution()
    print(solu.isPowerOfThree(28))