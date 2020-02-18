// https://leetcode-cn.com/problems/happy-number/solution/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution
{
public:
    bool HappyNumber(int num)
    {
        int slow = cal_num(num);
        int fast = cal_num(num);
        fast = cal_num(fast);
        while (slow != fast) 
        {
            slow = cal_num(slow);
            fast = cal_num(fast);
            fast = cal_num(fast);
        }
        if (slow == 1) return true;
        else return false;
    }
    
    int cal_num(int num)
    {
        int res = 0;
        while (num > 0) 
        {
            res += pow((num % 10), 2);
            num = num / 10;
        }
        return res;
    }
};

int main()
{
    Solution solu;
    cout << solu.HappyNumber(19) << endl;
}