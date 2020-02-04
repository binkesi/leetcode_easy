// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/solution/mai-mai-gu-piao-de-zui-jia-shi-ji-ii-by-leetcode/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices){
        int max_pro = 0;
        for(size_t i = 1; i < prices.size(); ++i){
            int minus = prices[i] - prices[i-1];
            if (minus > 0) max_pro += minus;
        }
        return max_pro;
    }
};

int main(){
    return 0;
}