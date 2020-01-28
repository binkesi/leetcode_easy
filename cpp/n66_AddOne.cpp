// https://leetcode-cn.com/problems/plus-one/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; --i){
            if(digits[i] == 9)digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

int main(){
    vector<int> digits = {4, 3, 2, 3};
    Solution solu;
    auto result = solu.plusOne(digits);
    for(auto iter = result.begin(); iter != result.end(); ++iter) cout << *iter << ", ";
    cout << endl;
}