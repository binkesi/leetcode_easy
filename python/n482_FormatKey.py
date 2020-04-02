# https://leetcode-cn.com/problems/license-key-formatting/
class Solution:
    def licenseKeyFormatting(self, S: str, K: int) -> str:       
        S = S.replace("-", "")
        S = S.upper()
        lis = list(S)
        l = len(S) - K
        while l > 0:           
            lis.insert(l, '-')
            l = l - K
        S = ''.join(lis)
        return S
        
    def licenseKeyFormatting_a(self, S: str, K: int) -> str:       
        S = S.replace("-", "")
        S = S.upper()
        l = len(S) - K
        while l > 0:           
            S = S[0:l] + "-" + S[l:]
            l = l - K
        return S    
        

if __name__ == "__main__":
    solu = Solution()
    s = "5F3Z-2e-9-w"
    k = 4
    print(solu.licenseKeyFormatting_a(s, k))