# https://leetcode-cn.com/problems/relative-ranks/
class Solution:
    def findRelativeRanks(self, nums):
        res = [0] * len(nums)
        for i, j in enumerate(nums):
            nums[i] = (j, i+1)
        nums.sort(key=lambda x: x[0], reverse=True)      
        for k, t in enumerate(nums):
            res[t[1]-1] = str(k + 1)
        for i in range(len(res)):
            if res[i] == "1": res[i] = "Gold Medal"
            if res[i] == "2": res[i] = "Silver Medal"
            if res[i] == "3": res[i] = "Bronze Medal"
        return res
        

if __name__ == "__main__":
    pass