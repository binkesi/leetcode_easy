# https://leetcode-cn.com/problems/intersection-of-two-arrays/
class Solution:
    def intersection(self, nums1, nums2):
        inter = set()
        for i in nums1:
            if i in nums2:
                inter.add(i)
        return list(inter)
        
    def intersection_a(self, nums1, nums2):
        set1 = set(nums1)
        set2 = set(nums2)
        return list(set1 & set2)


if __name__ == "__main__":
    nums1 = [4, 9, 5]
    nums2 = [9, 4, 9, 8, 4]
    solu = Solution()
    print(solu.intersection(nums1, nums2))
    print(solu.intersection_a(nums1, nums2))