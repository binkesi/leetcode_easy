# https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
class Solution:
    def removeDuplicates(self, nums) -> int:
        i = 1
        while i < len(nums):
            if nums[i] == nums[i-1]:
                nums.pop(i)
            else:
                i += 1               
        return len(nums)
        
        
if __name__ == "__main__":
    solu = Solution()
    nums = [0,0,1,1,1,2,2,3,3,4]
    print(solu.removeDuplicates(nums))