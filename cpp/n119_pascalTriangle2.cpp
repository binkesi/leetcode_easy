// https://leetcode-cn.com/problems/pascals-triangle-ii/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res = {1};
        for(int i=1; i <= rowIndex; ++i){
            res.insert(res.begin(), 0);
            for (int j=0; j < i; ++j){
                res[j] = res[j] + res[j+1];
            }
        }
        return res;
    }
};

int main(){
    return 0;
}