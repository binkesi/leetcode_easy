// https://leetcode-cn.com/problems/license-key-formatting/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
public:
    string licenseKeyFormatting(string S, int K){
        for(size_t i = 0; i < S.size();){
            if (S[i] == '-') S.erase(i, 1);
            else {
                S[i] = toupper(S[i]);
                i += 1;
            }
        }
        int l = S.size() - K;
        while (l > 0){
            S.insert(l, 1, '-');
            l -= K;
        }
        return S;
    }
};

int main(){
    Solution solu;
    string S = "5F3Z-2e-9-w";
    int K = 4;
    cout << solu.licenseKeyFormatting(S, K) << endl;
}