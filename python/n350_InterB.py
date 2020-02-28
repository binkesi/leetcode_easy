# https://leetcode-cn.com/problems/intersection-of-two-arrays-ii/
class Solution:
    def intersect(self, nums1, nums2):
        s1 = sorted(nums1)
        s2 = sorted(nums2)
        i = j = 0
        res = []
        while i < len(s1) and j < len(s2):
            if s1[i] == s2[j]:
                res.append(s1[i])
                i += 1
                j += 1
            elif s1[i] > s2[j]:
                j += 1
            else:
                i += 1
        return res
        
        
if __name__ == "__main__":
    nums1 = [1, 2, 2, 1]
    nums2 = [2, 2]
    solu = Solution()
    print(solu.intersect(nums1, nums2))
        