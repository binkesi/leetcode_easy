# https://leetcode-cn.com/problems/assign-cookies/

class Solution:
    def findContentChildren(self, g, s) -> int:
        cook = len(s)
        count = 0
        if cook == 0: return 0
        g.sort()
        s.sort()
        print(g, s)
        i = j = 0
        while j < cook and i < len(g):
            if g[i] <= s[j]:
                count += 1
                i += 1
                j += 1
            elif g[i] > s[j]:
                j += 1
        return count

        
if __name__ == "__main__":
    g = [10, 9, 8, 7]
    s = [5, 6, 7, 8]
    solu = Solution()
    print(solu.findContentChildren(g, s))
    