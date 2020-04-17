# https://leetcode-cn.com/problems/range-addition-ii/
class Solution:
    def maxCount(self, m: int, n: int, ops) -> int:
        if len(ops) == 0: return m * n
        wide = min([i[0] for i in ops])
        high = min([j[1] for j in ops])
        return wide * high


if __name__ == "__main__":
    pass