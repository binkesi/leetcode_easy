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
        
        
if __name__ == "__main__":
    pass