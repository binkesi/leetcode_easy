# https://leetcode-cn.com/problems/range-sum-query-immutable/
class NumArray:

    def __init__(self, nums):
        self.nums = nums

    def sumRange(self, i: int, j: int) -> int:
        sum = 0
        for k in range(i, j+1):
            sum += self.nums[k]
        return sum       


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)


if __name__ == "__main__":
    pass