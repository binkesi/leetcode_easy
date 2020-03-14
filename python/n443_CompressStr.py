# https://leetcode-cn.com/problems/string-compression/submissions/

class Solution:
    def compress(self, chars) -> int:
        if not chars:
            return 0
        count = 1
        i = 1
        res = chars[0]
        while i < len(chars):
            if chars[i] != chars[i-1]:
                if count > 1:
                    res += str(count)
                res += chars[i]
                i += 1
                count = 1
            else:
                count += 1
                chars.pop(i)
        if count > 1:
            res += str(count)
        chars.clear()
        for i in res:
            chars.append(i)
        return len(chars)
        

if __name__ == "__main__":
    pass         