# https://leetcode-cn.com/problems/contains-duplicate/
class Solution:
    def containsDuplicate(self, nums) -> bool:
        num_dic = {}
        for i, j in enumerate(nums):
            num_dic[j] = i
        return len(num_dic.keys()) != len(nums)
        
    def containsDuplicate_a(self, nums) -> bool:
        return len(set(nums)) != len(nums)
        
        
if __name__ == "__main__":
    solu = Solution()
    nums = [1, 2, 4, 6, 5, 4]
    print(solu.containsDuplicate(nums))
    print(solu.containsDuplicate_a(nums))