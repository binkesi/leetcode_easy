# https://leetcode-cn.com/problems/max-consecutive-ones/
class Solution:
    def findMaxConsecutiveOnes(self, nums) -> int:
        res = 0
        tmp = 0
        for i in nums:
            if i == 1:
                tmp += 1
            else:
                res = max(tmp, res)
                tmp = 0
        res = max(tmp, res)
        return res
        

if __name__ == "__main__":
    nums = [1, 0, 1, 1, 0, 1]
    solu = Solution()
    print(solu.findMaxConsecutiveOnes(nums))