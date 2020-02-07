# https://leetcode-cn.com/problems/single-number/
class Solution:
    def singleNumber(self, nums) -> int:
        cur_num = []
        for i in nums:
            if i not in cur_num:
                cur_num.append(i)
            else:
                cur_num.remove(i)
        return cur_num[0]
        
    def singleNumber_a(self, nums) -> int:
        cur_num = {}
        for i in nums:
            try:
                cur_num.pop(i)
            except:
                cur_num[i] = 1
        return cur_num.popitem()[0]
            
    def singleNumber_b(self, nums) -> int:
        a = 0
        for i in nums:
            a = i ^ a
        return a
        
        
if __name__ == "__main__":
    pass