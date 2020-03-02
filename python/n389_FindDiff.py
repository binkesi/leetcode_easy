# https://leetcode-cn.com/problems/find-the-difference/

class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        hash = [0] * 26
        for i in t:
            hash[ord(i) - ord('a')] += 1
        for j in s:
            hash[ord(j) - ord('a')] -= 1
        for k in range(len(hash)):
            if hash[k] == 1:
                return chr(97 + k)
                

if __name__ == "__main__":
    solu = Solution()
    s = "abcd"
    t = "dceba"
    print(solu.findTheDifference(s, t))