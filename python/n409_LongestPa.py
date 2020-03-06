# https://leetcode-cn.com/problems/longest-palindrome/
class Solution:
    def longestPalindrome(self, s: str) -> int:
        chr_list = [0]*52
        for i in s:
            ind = ord(i) - ord('a')
            chr_list[ind] += 1
        res = odd = 0
        for j in chr_list:
            if j % 2 == 0:
                res += j
            else:
                res = res + j - 1
                odd = 1
        return res + odd


if __name__ == "__main__":
    solu = Solution()
    s = "civilwartestingwhetherthatnaptionoranynartio"
    print(solu.longestPalindrome(s))