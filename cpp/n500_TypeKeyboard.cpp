// https://leetcode-cn.com/problems/keyboard-row/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s[3]={"qwertyuiopQWERTYUIOP","asdfghjklASDFGHJKL","zxcvbnmZXCVBNM"};
        vector<string> ans;
        for(string i : words)
        {
            int flag[3]={0};//使用flag[3]来记录是否在一行：该字符在第x行，那么flag[x-1]标记为1；
            for(int j=0;j<i.length();j++)
            {
                if(s[0].find(i[j])!=s[0].npos)flag[0]=1;
                else if(s[1].find(i[j])!=s[0].npos) flag[1]=1;
                else if(s[2].find(i[j])!=s[0].npos) flag[2]=1;
                if(flag[0] + flag[1] + flag[2] >1)break;
            }
            if(flag[0] + flag[1] + flag[2] ==1)
                ans.emplace_back(i);//如果跨行了，那么flag[0]+flag[1]+flag[2]!=0,该字符串不被加入容器中。
        }
        return ans;
    }
};

int main(){
    return 0;
}