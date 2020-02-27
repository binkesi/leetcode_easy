# https://leetcode-cn.com/problems/reverse-string/

class Solution:
    def reverseString(self, s) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        head = 0
        tail = len(s)-1
        while head < tail:
            tmp = s[head]
            s[head] = s[tail]
            s[tail] = tmp
            head += 1
            tail -= 1
            
    def reverseString_a(self, s) -> None:
        s.reverse()


if __name__ == "__main__":
    solu = Solution()
    s = ["h","e","l","l","o"]
    solu.reverseString(s)
    print(s)
    solu.reverseString_a(s)
    print(s)