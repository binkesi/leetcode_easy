# https://leetcode-cn.com/problems/nim-game/submissions/

class Solution:
    def canWinNim(self, n: int) -> bool:
        return n % 4 != 0
        

if __name__ == "__main__":
    solu = Solution()
    print(solu.canWinNim(26))