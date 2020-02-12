# https://leetcode-cn.com/problems/majority-element/
class Solution:
    def majorityElement(self, nums) -> int:
        num_map = {}
        thres = len(nums) // 2
        for i in nums:
            if i in num_map:
                num_map[i] += 1
            else: num_map[i] = 1
            if num_map[i] > thres:
                return i 
            
            
if __name__ == "__main__":
    solu = Solution()
    nums = [2,2,1,1,1,2,2]
    print(solu.majorityElement(nums))
                