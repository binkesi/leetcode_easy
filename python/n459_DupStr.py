# https://leetcode-cn.com/problems/repeated-substring-pattern/

class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        l = len(s)
        ele = []
        for i in range(1, int(l/2)+1):
            if l%i == 0:
                ele.append(i)
        print(ele)
        for j in ele:
            str_lis = []
            sub_str = s[0:j]
            print(sub_str)
            i = j
            while i < l:
                if s[i:i+j] != sub_str:
                    break
                i = i + j
            if i >= l:
                return True
        return False  
        
        
if __name__ == "__main__":
    pass
                    