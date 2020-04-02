# https://leetcode-cn.com/problems/heaters/
class Solution:
    def findRadius(self, houses, heaters) -> int:
        houses.sort()
        heaters.sort()
        res = 0
        for house in houses:

            left = 0
            right = len(heaters) - 1
            while left < right:
                middle = left + (right - left) // 2
                if heaters[middle] < house:
                    left = middle + 1
                else:
                    right = middle            
            if heaters[left] == house:
                house_res = 0
            elif heaters[left] < house:
                house_res = house - heaters[left]
            else:
                if left == 0:
                    house_res = heaters[left] - house
                else:
                    house_res = min(heaters[left] - house, house - heaters[left - 1])
            res = max(house_res, res)
        return res
                      
            
if __name__ == "__main__":
    pass