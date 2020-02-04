# https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/solution/mai-mai-gu-piao-de-zui-jia-shi-ji-ii-by-leetcode/
class Solution:
    def maxProfit(self, prices) -> int:
        max_pro = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i-1]:
                max_pro += (prices[i] - prices[i-1])
        return max_pro
        
if __name__ == "__main__":
    pass