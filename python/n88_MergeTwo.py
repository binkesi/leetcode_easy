# https://leetcode-cn.com/problems/merge-sorted-array/
class Solution:
    def merge(self, nums1, m: int, nums2, n: int) -> None:
        for i in range(m, m+n):
            nums1[i] = nums2[i-m]
        nums1.sort()        
        
        
if __name__ == "__main__":
    solu = Solution()
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    m = 3
    n = 3
    solu.merge(nums1, m, nums2, n)
    print(nums1)