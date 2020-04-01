# https://leetcode-cn.com/problems/island-perimeter/

class Solution:
    def islandPerimeter(self, grid) -> int:
        wid = len(grid[0])
        high = len(grid)
        res = 0
        i = 0
        while i < high:
            j = 0
            while j < wid:
                point = (i, j)
                if (grid[i][j] == 1): 
                    res += self.calone(grid, point)
                    print(i, j, self.calone(grid, point))
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
        

if __name__ == "__main__":
    solu = Solution()
    grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
    print(solu.islandPerimeter(grid))