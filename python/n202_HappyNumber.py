# https://leetcode-cn.com/problems/happy-number/solution/
class Solution:
    def isHappy(self, n: int) -> bool:
        def cal_num(num):
            res = 0
            while num > 0:
                res += (num % 10) ** 2
                num = num // 10
            return res
            
        slow = cal_num(n)
        fast = cal_num(n)
        fast = cal_num(fast)
        while slow != fast:
            slow = cal_num(slow)
            fast = cal_num(fast)
            fast = cal_num(fast)
        if slow == 1:
            return True
        else:
            return False
                   
            
if __name__ == "__main__":
    solu = Solution()
    print(solu.isHappy(897))