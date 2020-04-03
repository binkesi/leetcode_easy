# https://leetcode-cn.com/problems/construct-the-rectangle/
class Solution:
    def constructRectangle(self, area):
        w = int(sqrt(area))
        while w > 0:
            if area % w == 0:
                l = int(area / w)
                break
            w = w - 1
        return [l, w] 
        
        
if __name__ == "__main__":
    pass