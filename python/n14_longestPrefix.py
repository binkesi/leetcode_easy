# https://leetcode-cn.com/problems/longest-common-prefix/
class Solution:
    def longestCommonPrefix(self, strs) -> str:     
        s = ""
        for i in zip(*strs):
            if len(set(i)) == 1:
                s += i[0]
            else:
                break           
        return s
    
    def longestCommonPrefix_find(self, strs) -> str:
        if not strs:
            return ""
        res = strs[0]
        for i in range(len(strs)):
            while strs[i].find(res) != 0:
                res = res[:-1]
        return res

if __name__ == "__main__":
    solu = Solution()
    test_lis = ["flower","flow","flight"]
    print(list(zip(*test_lis)))
    print(solu.longestCommonPrefix(test_lis))
    print(solu.longestCommonPrefix_find(test_lis))