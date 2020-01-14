class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        if x[0] == '-':
            x = x[1:] + '-'
        result = int(x[::-1])
        if -2147483648 < result < 2147483647:
            return result
        else:
            return 0  


if __name__ == "__main__":
    solu = Solution()
    print(solu.reverse(567))