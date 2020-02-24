# https://leetcode-cn.com/problems/missing-number/
class Solution:
    def missingNumber(self, nums) -> int:
        l = len(nums)
        sum = l * (l+1) / 2
        for i in nums:
            sum -= i
        return int(sum)


if __name__ == "__main__":
    nums = [0, 3, 5, 2, 1]
    solu = Solution()
    print(solu.missingNumber(nums))