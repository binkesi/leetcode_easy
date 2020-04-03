# https://leetcode-cn.com/problems/next-greater-element-i/
class Solution:
    def nextGreaterElement(self, nums1, nums2):
        res = []
        if not nums2:
            return res
        gre_dict = {}
        tmp = [nums2[0]]       
        for i in nums2[1:]:
            while(tmp and i > tmp[-1]):
                item = tmp.pop()
                gre_dict[item] = i
            tmp.append(i)
        for j in nums1:
            if j in gre_dict.keys():
                res.append(gre_dict[j])
            else:
                res.append(-1)
        return res
        

if __name__ == "__main__":
    pass        
        