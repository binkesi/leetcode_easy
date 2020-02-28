# https://leetcode-cn.com/problems/intersection-of-two-arrays/
class Solution:
    def intersection(self, nums1, nums2):
        inter = set()
        for i in nums1:
            if i in nums2:
                inter.add(i)
        return list(inter)


if __name__ == "__main__":
    nums1 = [4, 9, 5]
    nums2 = [9, 4, 9, 8, 4]
    solu = Solution()
    print(solu.intersection(nums1, nums2))