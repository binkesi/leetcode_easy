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
    
    int singleNumber_a(vector<int>& nums){
        int num = nums[0];
        for (size_t i = 1; i < nums.size(); ++i){
            num = num ^ nums[i];
        }
        return num;
    }
};

int main(){
    return 0;
}