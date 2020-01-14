# https://leetcode-cn.com/problems/reverse-integer/solution/
class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        if x[0] == '-':
            x = x[1:] + '-'
        result = int(x[::-1])
        if -2147483648 < result < 2147483647:
            return result
        else:
            return 0

    def reverse_v2(self, x: int) -> int:
        y, res = abs(x), 0
        boundary =(1 << 31) - 1 if x > 0 else 1 << 31
        while y != 0:
            res = res * 10 + y % 10
            y //= 10
        if res > boundary:
            return 0
        if x > 0:
            return res
        else:
            return -res


if __name__ == "__main__":
    solu = Solution()
    print(solu.reverse(567))