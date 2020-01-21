# https://leetcode-cn.com/problems/search-insert-position/
class Solution:
    def searchInsert(self, nums, target: int) -> int:
        if nums is None or nums[0] > target:
            return 0
        for i in range(len(nums)):
            if nums[i] == target:
                return i
            elif nums[i] > target:
                return i
        return len(nums)
        
        
if __name__ == "__main__":
    solu = Solution()
    nums = [1,3,5,6]
    target = 7
    print(solu.searchInsert(nums, target))
            