# https://leetcode-cn.com/problems/factorial-trailing-zeroes/submissions/

class Solution:
    def trailingZeroes(self, n: int) -> int:
        num = 0
        while n >= 5:
            n = n // 5
            num += n
        return num


if __name__ == "__main__":
    pass       