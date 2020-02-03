// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for (size_t i = 0; i < prices.size(); ++i){
            if (prices[i] < min_price) min_price = prices[i];
            else if (prices[i] - min_price > max_profit) max_profit = prices[i] - min_price;
        }
        return max_profit;
    }
};

int main(){
    return 0;
}