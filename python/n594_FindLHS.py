# https://leetcode-cn.com/problems/longest-harmonious-subsequence/
class Solution:
    def findLHS(self, nums) -> int:
        if nums == []: return 0
        count = {}
        for i in nums:
            if i not in count.keys():
                count[i] = 1
            else:
                count[i] += 1
        largest = 0
        key_list = list(count.keys())
        key_list.sort()
        for i in range(1, len(key_list)):
            if key_list[i] - key_list[i-1] == 1:
                largest = max(largest, count[key_list[i]]+count[key_list[i-1]])
        return largest 


if __name__ == "__main__":
    pass         
           