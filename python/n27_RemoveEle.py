# https://leetcode-cn.com/problems/remove-element/
class Solution:
    def removeElement(self, nums, val: int) -> int:
        i= 0
        while i < len(nums):
            if nums[i] == val:
                nums.pop(i)
            else:
                i += 1
        return len(nums)
        

if __name__ == "__main__":
    solu = Solution()
    nums = [0,1,2,2,3,0,4,2]
    val = 2
    print(solu.removeElement(nums, val))