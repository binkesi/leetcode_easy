# https://leetcode-cn.com/problems/isomorphic-strings/

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        str_map = {}
        for i in range(len(s)):
            str_map[s[i]] = t[i]
        iter = str_map.values()
        if len(list(iter)) != len(set(iter)):
            return False
        p = ""
        for i in range(len(s)):
            p += str_map[s[i]]
        return p == t


if __name__ == "__main__":
    solu = Solution()
    s = "egg"
    t = "add"
    print(solu.isIsomorphic(s, t))