# https://leetcode-cn.com/problems/number-complement/
class Solution:
    def findComplement(self, num: int) -> int:
        res = 0
        base = 1
        while num > 0:
            tmp = 1 - (num%2)
            res += (tmp * base)
            base *= 2
            num //= 2
        return res


if __name__ == "__main__":
    pass      