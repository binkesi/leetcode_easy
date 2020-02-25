# https://leetcode-cn.com/problems/move-zeroes/
class Solution:
    def moveZeroes(self, nums) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        def swap(i, j, nums):
            tmp = nums[i]
            nums[i] = nums[j]
            nums[j] = tmp
        for i in range(len(nums)):
            while i > 0 and nums[i] != 0 and nums[i-1] == 0:
                swap(i, i-1, nums)
                i -= 1
                
    def moveZeroes_a(self, nums) -> None:
        def swap(i, j, nums):
            tmp = nums[i]
            nums[i] = nums[j]
            nums[j] = tmp  
        last_not_zero = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                swap(last_not_zero, i, nums)
                last_not_zero += 1


if __name__ == "__main__":
    pass