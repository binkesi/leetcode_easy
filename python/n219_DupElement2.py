# https://leetcode-cn.com/problems/contains-duplicate-ii/
class Solution:
    def containsNearbyDuplicate(self, nums, k: int) -> bool:
        num_dic = {}
        for i, j in enumerate(nums):
            if j in num_dic.keys():
                if i - num_dic.get(j) <= k:
                    return True                   
            num_dic[j] = i
        return False 


if __name__ == "__main__":
    solu = Solution()
    nums = [1, 2, 4, 1, 3, 5]
    k = 3
    print(solu.containsNearbyDuplicate(nums, k))