// https://leetcode-cn.com/problems/pascals-triangle/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0) {
            vector<vector<int>> tRows = {};
            return tRows;
        }
        if (numRows == 1) {
            vector<vector<int>> tRows = {{1}};
            return tRows;
        }
        vector<vector<int>> last = generate(numRows-1);
        vector<int> last_arr = last.back();
        vector<int> cur = {1};
        for(size_t i = 0; i < last_arr.size()-1; ++i){
            cur.push_back(last_arr[i] + last_arr[i+1]);
        }
        cur.push_back(1);
        last.push_back(cur);
        return last;
    }
};

int main(){
    return 0;
}