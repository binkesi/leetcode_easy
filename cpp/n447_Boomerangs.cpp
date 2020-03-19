#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int d2(int x1, int x2, int y1, int y2) {
        int d1 = x1 - x2;
        int d2 = y1 - y2;
        return d1 * d1 + d2 * d2;
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int N = points.size();
        vector<unordered_map<int, int> > dists(N);
        int res = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < i; ++j) {
                int d = d2(points[i][0], points[j][0], points[i][1], points[j][1]);
                res += 2 * (dists[i][d] + dists[j][d]);
                ++dists[i][d];
                ++dists[j][d];
            }
        }
        return res;
    }
};

int main(){
    return 0;
}