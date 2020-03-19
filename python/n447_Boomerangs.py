# https://leetcode-cn.com/problems/number-of-boomerangs/
class Solution:
    def numberOfBoomerangs(self, points) -> int:
        dist_table = {}
        res = 0
        for i in range(len(points)):
            for j in range(len(points)):
                dist_two = self.dist(points[i], points[j])
                if  dist_two in dist_table.keys():
                    dist_table[dist_two] += 1
                else:
                    dist_table[dist_two] = 1
            for i in dist_table.values():
                res += i * (i-1)
            dist_table.clear()
        return res

    def dist(self, point_a, point_b):
        return (point_a[0] - point_b[0]) ** 2 + (point_a[1] - point_b[1]) ** 2
        
        
if __name__ == "__main__":
    pass