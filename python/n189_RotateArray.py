# https://leetcode-cn.com/problems/rotate-array/

class Solution():
    def rotate(self, nums, k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        if k == 0:
            pass
        else:
            nums[:] = nums[-k:] + nums[:-k]
            

if __name__ == "__main__":
    pass