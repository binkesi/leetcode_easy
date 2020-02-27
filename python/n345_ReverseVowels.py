# https://leetcode-cn.com/problems/reverse-vowels-of-a-string/

class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = "aeiouAEIOU"
        head = 0
        tail = len(s) - 1
        while head < tail:
            if s[head] in vowels and s[tail] in vowels:
                s = s[:head] + s[tail] + s[head+1:tail] + s[head] + s[tail+1:]
                head += 1
                tail -= 1
            elif s[head] in vowels and s[tail] not in vowels:
                tail -= 1
            elif s[head] not in vowels and s[tail] in vowels:
                head += 1
            else:
                head += 1
                tail -= 1 
        return s                
            
            
if __name__ == "__main__":
    solu = Solution()
    s = "leEtcOde"
    print(solu.reverseVowels(s))