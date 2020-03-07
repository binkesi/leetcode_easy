# https://leetcode-cn.com/problems/third-maximum-number/submissions/
class Solution:
    def thirdMax(self, nums) -> int:
        if not nums: return None
        tmp = list(set(nums))
        tmp.sort()
        if len(tmp) >= 3: return tmp[-3]
        else: return tmp[-1]
        
if __name__ == "__main__":
    solu = Solution()
    nums = [2, 5, 3, 8, 5, 5, 8, 8, 4, 12]
    print(solu.thirdMax(nums))