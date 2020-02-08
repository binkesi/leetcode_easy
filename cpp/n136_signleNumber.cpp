// https://leetcode-cn.com/problems/single-number/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        map<int,int>a;
        map<int,int>::iterator it;
        for(size_t i=0;i<nums.size();++i){
            if(a[nums[i]]==1){
                a.erase(nums[i]);
            }
            else
                a[nums[i]]++;
        }
        it=a.begin();
        return it->first;
    }
};

int main(){
    return 0;
}