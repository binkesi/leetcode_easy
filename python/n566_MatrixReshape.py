# https://leetcode-cn.com/problems/reshape-the-matrix/
class Solution:
    def matrixReshape(self, nums, r: int, c: int):
        if nums is None or r * c != len(nums) * len(nums[0]):
            return nums
        for i in range(1, len(nums)):
            nums[0] += nums[1]
            nums.pop(1)
        for j in range(r-1):
            nums.append(nums[j][c:])
            nums[j] = nums[j][0:c]
        return nums 
        
        
if __name__ == "__main__":
    pass          