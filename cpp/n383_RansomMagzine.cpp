// https://leetcode-cn.com/problems/ransom-note/submissions/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution{
public:
    bool canConstruct(string ransomNote, string magazine){
        for (size_t i = 0; i < ransomNote.size(); ++i){
            char ele = ransomNote[i];
            int pos = magazine.find(ele);
            if (pos == magazine.npos) return false;
            else magazine.erase(pos, 1);
        }
        return true;
    }
};

int main(){
    return 0;
}