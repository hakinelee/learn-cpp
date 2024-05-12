#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    int a[105][105] = {0};
    cin >> n >> m >> k;
    // 火把
    for(int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        for(int j = x - 2; j <= x + 2; ++j) {
            for(int k = y - 2; k <= y + 2; ++ k) {
                if((j == x - 2 || j == x + 2) && k == y)
                    a[j][k] = 1;
                if((j == x - 1 || j == x + 1) && k <= y + 1 && k >= y - 1)
                    a[j][k] = 1;
                if(j == x)
                    a[j][k] = 1;
            }
        }
    }
    // 萤石
    for(int i = 1; i <= k; ++i) {
        int o, p;
        cin >> o >> p;
        a[o][p] = 1;
        for(int j = o - 2; j <= o + 2; ++j)
            for(int k = p - 2; k <= p + 2; ++ k)
                if(a[j][k] != 1)
                    a[j][k] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            if(a[i][j] == 0)
                ans++;
    cout << ans << endl;
    return 0;
}
