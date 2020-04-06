// https://leetcode-cn.com/problems/relative-ranks/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    struct Node{
        int index;
        int score;
        Node(int i, int s): index(i), score(s) {};
        bool operator < (const Node& other) const{
            if (score == other.score){
                return index < other.index;
            }
            return score > other.score;
        }
    };
    
    string trans(int i){
        if (i == 0) return "Gold Medal";
        if (i == 1) return "Silver Medal";
        if (i == 2) return "Bronze Medal";
        return to_string(i+1);
    }
    
    vector<string> findRelativeRanks(vector<int>& nums) {
        int l = nums.size();
        vector<Node> nodes;
        for (int i = 0; i < l; ++i){
            nodes.push_back(Node(i, nums[i]));
        }
        sort(nodes.begin(), nodes.end());
        vector<string> res(l);
        for (int j = 0; j < l; ++j){
            res[nodes[j].index] = trans(j);
        }
        return res;
    }
};

int main(){
    return 0;
}