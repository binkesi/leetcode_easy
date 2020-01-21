# https://leetcode-cn.com/problems/implement-strstr/
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle == "":
            return 0
        if needle not in haystack:
            return -1
        return haystack.index(needle)


if __name__ == "__main__":
    solu = Solution()
    haystack = "hello"
    needle = "ll"
    print(solu.strStr(haystack, needle))