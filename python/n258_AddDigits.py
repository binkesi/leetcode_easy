# https://leetcode-cn.com/problems/add-digits/
class Solution:
    def addDigits(self, num: int) -> int:
        res = num
        while res >= 10:
            res = 0
            while num > 0:
                res += num % 10
                num //= 10
            num = res
        return res 


if __name__ == "__main__":
    solu = Solution()
    print(solu.addDigits(38))