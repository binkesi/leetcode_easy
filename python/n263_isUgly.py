# https://leetcode-cn.com/problems/ugly-number/submissions/
class Solution:
    def isUgly(self, num: int) -> bool:
        if num <= 0: return False
        while num % 2 == 0:
            num = num / 2
            continue
        while num % 3 == 0:
            num = num / 3
            continue
        while num % 5 == 0:
            num = num / 5
            continue
        if num == 1:
            return True
        else:
            return False


if __name__ == "__main__":
    pass