# https://leetcode-cn.com/problems/fizz-buzz/
class Solution:
    def fizzBuzz(self, n: int):
        res = []
        for i in range(1, n+1):
            if i % 3 == 0 and i % 5 == 0:
                res.append("FizzBuzz")
            elif i % 3 == 0:
                res.append("Fizz")
            elif i % 5 == 0:
                res.append("Buzz")   
            else:
                res.append(str(i))
        return res
        

if __name__ == "__main__":
    solu = Solution()
    print(solu.fizzBuzz(17))
    