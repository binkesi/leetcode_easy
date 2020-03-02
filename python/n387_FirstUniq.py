# https://leetcode-cn.com/problems/first-unique-character-in-a-string/
class Solution:
    def firstUniqChar(self, s: str) -> int:
        index_list = []
        for i in range(len(s)):
            if i == s.index(s[i]):
                index_list.append(i)
            elif s.index(s[i]) in index_list:
                index_list.remove(s.index(s[i]))
        if not index_list:
            return -1
        else:
            return index_list[0]
            
    def firstUniqChar_a(self, s: str) -> int:
        index_map = {}
        for i, j in enumerate(s):
            if j not in index_map.keys():
                index_map[j] = 1
            else:
                index_map[j] += 1
        for k in s:
            if index_map[k] == 1:
                return s.index(k)
        return -1
            
            
if __name__ == "__main__":
    solu = Solution()
    s = "loveleetcode"
    print(solu.firstUniqChar_a(s))