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

    def reverseVowels_a(self, s: str) -> str:   
        vowels = "aeiouAEIOU"
        head = 0
        tail = len(s) - 1
        arr = list(s)
        while head < tail:
            while s[head] not in vowels and head < tail:
                head += 1
            while s[tail] not in vowels and head < tail:
                tail -= 1
            if head < tail:
                arr[head], arr[tail] = arr[tail], arr[head]
                head += 1
                tail -= 1
        return ''.join(arr)
            
            
if __name__ == "__main__":
    solu = Solution()
    s = "leEtcOde"
    print(solu.reverseVowels_a(s))