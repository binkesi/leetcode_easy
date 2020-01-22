# https://leetcode-cn.com/problems/count-and-say/
class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 1:
            return '1'   
        if n == 2:
            return '11'
        last_count = self.countAndSay(n-1)
        this_count = ''
        num = 1
        for i in range(1, len(last_count)):
            if last_count[i] != last_count[i-1]:
                this_count = this_count + str(num) + last_count[i-1]
                num = 1
                continue
            else:
                num += 1
        this_count = this_count + str(num) + last_count[-1]      
        return this_count


if __name__ == "__main__":
    solu = Solution()
    print(solu.countAndSay(10))
    