// https://leetcode-cn.com/problems/island-perimeter/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0;i<grid.size();++i){
            for( int j =0;j<grid[0].size();++j){ 
                if(grid[i][j] == 1) ++count;
            }
        }
        for(int i = 0;i<grid.size()-1;++i){
            for( int j =0;j<grid[0].size()-1;++j){
                if(grid[i][j] == 1 && grid[i][j+1] == 1 &&grid[i+1][j] == 1 && grid[i+1][j+1] == 1)
                    --count;
            }
        }
        return 2*count+2;
    }
};

int main(){
    return 0;
}