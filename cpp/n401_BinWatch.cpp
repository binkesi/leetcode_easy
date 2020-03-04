// https://leetcode-cn.com/problems/binary-watch/
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        int h = 0;
        vector<string> res;
        while (h < 12){
            int m = 0;
            while(m < 60){
                if (count(m) + count(h) == num){
                    string tim;
                    tim = to_string(h) + ":" + (m < 10 ? "0" + to_string(m) : to_string(m));
                    res.push_back(tim);
                }
                m += 1;
            }
            h += 1;
        }
        return res;
    }
    
private:
    int count(int num){
        int res = 0;
        while (num != 0){
            num = num & (num - 1);
            res += 1;
        }
        return res;
    }
};

int main(){
    return 0;
}