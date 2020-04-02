// https://leetcode-cn.com/problems/heaters/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int res = 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());        
        for(auto s: houses){
            int left = 0;
            int right = heaters.size() - 1;
            int house_res = 0;
            while(left < right){
                int mid = left + (right - left) / 2;
                if (heaters[mid] < s) left = mid + 1;
                else right = mid;
            }
            if (heaters[left] <= s) house_res = s - heaters[left];
            else{
                if (left == 0) house_res = heaters[left] - s;
                else house_res = min(heaters[left] - s, s - heaters[left-1]);
            }
            res = max(house_res, res);
        }
        return res;
    }
};

int main(){
    return 0;
}