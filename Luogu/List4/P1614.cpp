#include<bits/stdc++.h>
#define endl '\n'
#define INF 0x3f3f3f3f
using namespace std;

const int N = 3e3 + 10;
int n, m, a[N], ans = INF, temp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n - m + 1; ++i) {
        for(int j = 1; j <= m; ++j)
            temp += a[i + j - 1];
        if(temp < ans)
            ans = temp;
        temp = 0;
    }
    cout << ans << endl;
    return 0;
}
