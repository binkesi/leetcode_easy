# https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/

class Solution:
    def toHex(self, num: int) -> str:
        hex_lis = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f']
        if num < 0:
            num = ~num