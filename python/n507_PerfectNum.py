# https://leetcode-cn.com/problems/perfect-number/
class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num <= 1: return False
        res = 1
        for i in range(2, int(math.sqrt(num))+1):
            if num % i == 0: res = res + i + num/i
        return num == res
        
  
if __name__ == "__main__":
    pass