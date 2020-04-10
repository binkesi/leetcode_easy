# https://leetcode-cn.com/problems/k-diff-pairs-in-an-array/
from collections import Counter
class Solution:
    def findPairs(self, nums, k: int) -> int:
        if k < 0: return 0
        if k == 0:
            a = Counter(nums)
            res = 0
            for i in a.values():
                if i > 1: res += 1
            return res
        nums = list(set(nums))
        nums.sort()            
        i = j = res = 0        
        while j < len(nums):
            if nums[j] - nums[i] == k:
                res += 1
                i += 1
                j += 1
            elif nums[j] - nums[i] < k:
                j += 1
            elif nums[j] - nums[i] > k:
                i += 1
        return res 
        
        
if __name__ == "__main__":
    pass                