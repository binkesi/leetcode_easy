# https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/
class Solution:
    def findUnsortedSubarray(self, nums) -> int:
        tmp = sorted(nums)
        start = 0
        end = len(nums)-1
        while(start <= end):
            if nums[start] != tmp[start]:
                break
            start += 1
        while (end >= 0):
            if nums[end] != tmp[end]:
                break
            end -= 1
        return max(0, end-start+1)  
        
                
if __name__ == "__main__":
    pass         
        