# https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/
class Solution:
    def maxProfit(self, prices) -> int:
        min_price = sys.maxsize
        max_pro = 0
        for i in prices:
            if i < min_price:
                min_price = i
            elif i - min_price > max_pro:
                max_pro = i - min_price
        return max_pro

        
if __name__ == "__main__":
    pass