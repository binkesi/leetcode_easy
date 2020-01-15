# https://leetcode-cn.com/problems/roman-to-integer/
class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        spec_dict = {'IV': -2, 'IX': -2, 'XL': -20, 'XC': -20, 'CD': -200, 'CM': -200}
        result = 0
        for i in s:
            result += roman_dict[i]
        print(result)
        for key, value in spec_dict.items():
            if key in s:
                result += value
        return result


if __name__ == "__main__":
    solu = Solution()
    print(solu.romanToInt('MCMXCIV'))