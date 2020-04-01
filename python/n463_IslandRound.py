# https://leetcode-cn.com/problems/island-perimeter/
import copy

class Solution:
    def islandPerimeter(self, grid) -> int:
        wid = len(grid[0])
        high = len(grid)
        res = 0
        head_list = [0]*wid
        grid.insert(0, head_list)
        grid.append(head_list)
        for li in range(high+1):           
            grid[li].insert(0, 0)
            grid[li].append(0)           
        i = 1
        while i <= high+1:
            j = 1
            while j <= wid+1:
                point = (i, j)
                if (grid[i][j] == 1): 
                    res += self.calone_an(grid, point)
                j += 1
            i += 1
        return res
        
    def calone(self, grid, point):
        high = len(grid[0])
        wid = len(grid)
        res = 0
        a, b = point[0], point[1]
        if a != 0:
            res += (grid[a-1][b]^1)
        if a != wid - 1:
            res += (grid[a+1][b]^1)
        if b != 0:
            res += (grid[a][b-1]^1)
        if b != high - 1:
            res += (grid[a][b+1]^1)
        if a == 0:
            res += 1
        if a == wid-1:
            res += 1
        if b == 0:
            res += 1
        if b == high-1:
            res += 1       
        return res 
        
    def calone_an(self, grid, point):
        res = 0
        a, b = point[0], point[1]
        res = res + (grid[a-1][b]^1) + (grid[a+1][b]^1) + (grid[a][b-1]^1) + (grid[a][b+1]^1)
        return res
        

if __name__ == "__main__":
    solu = Solution()
    grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
    print(solu.islandPerimeter(grid))