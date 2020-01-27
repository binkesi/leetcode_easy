# https://leetcode-cn.com/problems/sqrtx/
class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 1:
            return 1
        left = 0
        right = int(x/2)
        while left < right:
            mid = (left + right + 1) >> 1
            sqr = mid * mid
            if sqr <= x:
                left = mid
            else:
                right = mid - 1   
        return left
           
 
if __name__ == "__main__":
    solu = Solution()
    print(solu.mySqrt(1923514994))