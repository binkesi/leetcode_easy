class Solution:
    def findDisappearedNumbers(self, nums):
        for i in range(len(nums)):
            ind = abs(nums[i])-1
            if nums[ind] > 0:
                nums[ind] *= -1
        res = []
        for i in range(len(nums)):
            if nums[i] > 0:
                res.append(i+1)
        return res  
        
if __name__ == "__main__":
    pass        