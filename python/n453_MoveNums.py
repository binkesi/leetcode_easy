# https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements/
class Solution:
    def minMoves(self, nums) -> int:
        nums = sorted(nums)
        res = 0
        for i in range(1, len(nums)):
            res += (nums[i] - nums[0])
        return res
        
    def minMOves(self, nums):
        min_num = min(nums)
        res = 0
        for i in range(len(nums)):
            res += (nums[i] - min_num)
        return res
        

if __name__ == "__main__":
    pass