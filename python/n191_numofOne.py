# https://leetcode-cn.com/problems/number-of-1-bits/

class Solution():
    def numOfOne(self, n) -> int:
        res = bin(n)[2:]
        num = 0
        for i in res:
            if int(i) & 1 == 1:
                num += 1
        return num
        

if __name__ == "__main__":
    solu = Solution()
    num = 964176192
    print(solu.numOfOne(num))
        