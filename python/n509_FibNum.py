# https://leetcode-cn.com/problems/fibonacci-number/
class Solution:
    def fib(self, N: int) -> int:
        if N == 0: return 0
        return list(self.calfib(N))[-1]

    def calfib(self, N):
        a, b = 0, 1
        while N > 0:
            yield b
            a, b = b, a+b
            N -= 1
            

if __name__ == "__main__":
    pass
