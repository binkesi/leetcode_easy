# https://leetcode-cn.com/problems/array-partition-i/
class Solution:
    def arrayPairSum(self, nums) -> int:
        nums.sort()
        res = i = 0
        while i < len(nums):
            res += nums[i]
            i += 2
        return res
        
        
if __name__ == "__main__":
    pass