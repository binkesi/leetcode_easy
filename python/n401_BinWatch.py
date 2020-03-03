# https://leetcode-cn.com/problems/binary-watch/submissions/
class Solution:
    def readBinaryWatch(self, num: int):
        return [f"{h}:{m:02d}" for h in range(12) for m in range(60) if (bin(h)+ bin(m)).count('1')==num]
        

if __name__ == "__main__":
    solu = Solution()
    print(solu.readBinaryWatch(1))