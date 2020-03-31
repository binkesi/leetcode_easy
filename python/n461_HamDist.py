class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        z = x ^ y
        res = 0
        while z > 0:
            if z % 2 != 0:
                res += 1
            z = z // 2
        return res
        
        
if __name__ == "__main__":
    solu = Solution()
    print(solu.hammingDistance(2, 4))