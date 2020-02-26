# https://leetcode-cn.com/problems/range-sum-query-immutable/
class NumArray:

    def __init__(self, nums):
        self.nums = nums
        if not self.nums:
            return
        self.dp = [0] * len(self.nums)
        self.dp[0] = self.nums[0]
        for k in range(1, len(self.nums)):
            self.dp[k] = self.dp[k-1] + self.nums[k]        

    def sumRange(self, i: int, j: int) -> int:
        if i == 0:
            return self.dp[j]
        else: return self.dp[j] - self.dp[i-1]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)


if __name__ == "__main__":
    pass