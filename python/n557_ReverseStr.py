# https://leetcode-cn.com/problems/reverse-words-in-a-string-iii/submissions/
class Solution:
    def reverseWords(self, s: str) -> str:
        lis = s.split(' ')
        for i in range(len(lis)):
            lis[i] = lis[i][::-1]
        return ' '.join(lis)
        

if __name__ == "__main__":
    pass