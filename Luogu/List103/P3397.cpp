#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1010;
int n, m, a[N][N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 1; i <= m; ++i) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j <= x2; ++j)
            for(int k = y1; k <= y2; ++k)
                a[j][k]++;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}
