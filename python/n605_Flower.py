# https://leetcode-cn.com/problems/can-place-flowers/submissions/

class Solution:
    def canPlaceFlowers(self, flowerbed, n: int) -> bool:
        count_0 = 0
        count_n = 0
        for index, i in enumerate(flowerbed):           
            if i == 1:
                tmp = (count_0-1)//2
                count_n = count_n + tmp if tmp > 0 else count_n
                count_0 = 0           
            elif i == 0:
                count_0 = count_0 + 2 if index == 0 else count_0 + 1
            if index == len(flowerbed)-1:
                count_n += (count_0)//2
        return count_n >= n
        

if __name__ == "__main__":
    pass