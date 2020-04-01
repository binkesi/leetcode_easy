# https://leetcode-cn.com/problems/heaters/
class Solution:
    def findRadius(self, houses, heaters) -> int:
        dis = []
        heaters.sort()
        for i in range(len(heaters)-1):
            dis.append(heaters[i+1] - heaters[i])
        if dis:
            return int(max((max(dis)-1)/2, (heaters[0]-1), (houses[-1] - heaters[-1])))
        else:
            return int(max((heaters[0]-1), (houses[-1] - heaters[-1])))
            
            
if __name__ == "__main__":
    pass