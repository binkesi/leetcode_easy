# https://leetcode-cn.com/problems/distribute-candies/
class Solution:
    def distributeCandies(self, candies) -> int:
        a = len(candies)
        b = len(list(set(candies)))
        return min(int(a/2), b)
        
        
if __name__ == "__main__":
    pass          