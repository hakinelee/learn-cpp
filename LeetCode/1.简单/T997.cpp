#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int, int>> a(n + 1, {0, 0}); // 使用 vector 代替静态数组
        for(const auto& t : trust) {
            int t_person = t[0];
            int z_person = t[1];
            a[t_person].first = 1; // 标记为被信任
            a[z_person].second++; // 信任计数增加
        }
        for(int idx = 1; idx <= n; idx++) {
            if(a[idx].first == 0 && a[idx].second == (n-1))
                return idx;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    int n = 3;
    vector<vector<int>> trust = {{1, 3}, {1, 2}, {2, 3}}; // 示例输入
    int temp = solution.findJudge(n, trust);
    cout << temp << endl; // 输出结果
    return 0;
}
