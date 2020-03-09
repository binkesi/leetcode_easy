// https://leetcode-cn.com/problems/add-strings/
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
class Solution 
{
public:
    string addStrings(string num1, string num2) 
    {
        int ln1 = num1.length() - 1;
        int ln2 = num2.length() - 1;
        int carry = 0;
        string c = "";
        while(carry == 1 || ln1 >= 0 || ln2 >= 0)
        {
            int x = ln1 < 0 ? 0 : num1[ln1--] - '0';
            int y = ln2 < 0 ? 0 : num2[ln2--] - '0'; 
            c.insert(0,1,char(x+y+carry) % 10 +'0');
            carry = (x+y+carry)/10;
        }
        return c;
    }
};

int main(){
    return 0;
}