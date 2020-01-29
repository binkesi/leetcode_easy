# https://leetcode-cn.com/problems/merge-sorted-array/
class Solution:
    def merge(self, nums1, m: int, nums2, n: int) -> None:
        for i in range(m, m+n):
            nums1[i] = nums2[i-m]
        nums1.sort()        

    def merge_a(self, nums1, m: int, nums2, n: int) -> None:
        p1 = m - 1
        p2 = n - 1
        p = m + n - 1
        while(nums1[p] == 0 and p2 >=0):
            if p1 < 0:
                for i in range(0, p2+1):
                    nums1[i] = nums2[i]
                break
            if nums2[p2] >= nums1[p1]:
                nums1[p] = nums2[p2]
                p2 -= 1
            else:
                nums1[p] = nums1[p1]
                nums1[p1] = 0
                p1 -= 1
            p -= 1 
            
        
        
if __name__ == "__main__":
    solu = Solution()
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    m = 3
    n = 3
    solu.merge_a(nums1, m, nums2, n)
    print(nums1)