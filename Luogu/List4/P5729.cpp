#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 25;
int w, x, h, q, a[N][N][N], ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> w >> x >> h >> q;
    for(int i = 1; i <= q; ++i) {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int j = x1; j <= x2; ++j)
            for(int k = y1; k <= y2; ++k)
                for(int l = z1; l <= z2; ++l)
                    a[j][k][l]++;
    }
    for(int i = 1; i <= w; ++i)
        for(int j = 1; j <= x; ++j)
            for(int k = 1; k <= h; ++k)
                if(!a[i][j][k])
                    ans++;
    cout << ans << endl;
    return 0;
}
