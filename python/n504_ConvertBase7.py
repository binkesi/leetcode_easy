# https://leetcode-cn.com/problems/base-7/
class Solution:
    def convertToBase7(self, num: int) -> str:
        if num < 0: return ("-" + self.convertToBase7(-num))
        if num < 7: return str(num)
        return self.convertToBase7(num // 7) + str(num % 7)
        
        
if __name__ == "__main__":
    solu = Solution()
    print(solu.convertToBase7(100))