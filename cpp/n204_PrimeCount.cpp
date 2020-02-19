// https://leetcode-cn.com/problems/count-primes/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int p = 2; p * p < n; ++p){
            int start = p;
            while (p * start < n){
                isPrime[p*start] = false;
                start += 1;
            }
        };
        int num = count(isPrime.begin(), isPrime.end(), true);
        return num;
    }
};

int main(){
    Solution solu;
    cout << solu.countPrimes(24) << endl;
}