# https://leetcode-cn.com/problems/plus-one/
class Solution:
    def plusOne(self, digits):
        if digits[-1] != 9:
            digits[-1] += 1
        elif len(digits) > 1:
            digits[-1] = 0
            digits = self.plusOne(digits[:-1]) + digits[-1:]
        else:
            digits[-1] = 0
            digits.insert(0, 1)
        return digits
            
if __name__ == "__main__":
    solu = Solution()
    digits = [9, 9, 9, 9]
    print(solu.plusOne(digits))