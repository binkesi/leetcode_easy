// https://leetcode-cn.com/problems/add-digits/
class Solution {
public:
    int addDigits(int num) {
        int res = num;
        while (res >= 10){
            res = 0;
            while (num > 0){
                res += num % 10;
                num = num / 10;
            }
            num = res;
        }
        return res;
    }
};

int main(){
    return 0;
}