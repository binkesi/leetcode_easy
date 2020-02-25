# https://leetcode-cn.com/problems/word-pattern/
class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        strs = str.split(" ")
        str_dict = {}
        if len(pattern) != len(strs):
            return False
        for i in range(len(pattern)):
            if pattern[i] not in str_dict.keys():
                if strs[i] in str_dict.values():
                    return False
                str_dict[pattern[i]] = strs[i]
            elif str_dict[pattern[i]] != strs[i]:
                return False
        return True


if __name__ == "__main__":
    solu = Solution()
    pattern = "abba"
    str = "dog dog dog dog"
    print(solu.wordPattern(pattern, str))