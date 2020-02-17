# https://leetcode-cn.com/problems/reverse-bits/submissions/

class Solution:
    def reverseBits(self, n: int) -> int:
        res = bin(n)[2:]
        res = res.zfill(32)
        res = res[::-1]
        return int(res, 2)
        
        
if __name__ == "__main__":
    solu = Solution()
    num = 964176192
    print(solu.reverseBits(num))