# https://leetcode-cn.com/problems/length-of-last-word/
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        if s is None:
            return 0
        for i in s[::-1]:
            if i == ' ':
                return (-1 - s[::-1].index(i))
        return len(s)
        
        
if __name__ == "__main__":
    solu = Solution()
    s = "a "
    print(solu.lengthOfLastWord(s))