# https://leetcode-cn.com/problems/count-primes/
class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 2: return 0
        isPrime = [1] * n
        isPrime[0] = isPrime[1] = 0
        for i in range(2, int(n**0.5)+1):
            tmp = i
            while i * tmp < n:
                isPrime[i*tmp] = 0
                tmp += 1
        return sum(isPrime)
        
        
if __name__ == "__main__":
    solu = Solution()
    print(solu.countPrimes(24))