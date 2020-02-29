# https://leetcode-cn.com/problems/valid-perfect-square/

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num == 1: return True
        left = 0
        right = num // 2       
        while left <= right:
            mid = int((left + right)/2)
            if mid * mid == num:
                return True
            elif mid * mid < num:
                left = mid + 1               
            else:
                right = mid - 1
        return False
        

if __name__ == "__main__":
    solu = Solution()
    print(solu.isPerfectSquare(256))