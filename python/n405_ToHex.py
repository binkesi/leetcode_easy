# https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/

class Solution:
    def toHex(self, num: int) -> str:
        hex_str = "0123456789abcdef"
        num &= 0xffffffff
        mask = 0b1111
        res = ""
        while num > 0:
            res += hex_str[num & mask]
            num >>= 4
        return res[::-1] if res else "0"
        
        
if __name__ == "__main__":
    solu = Solution()
    print(solu.toHex(-26))