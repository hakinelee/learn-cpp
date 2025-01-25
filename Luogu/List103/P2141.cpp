#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[105], n, ans;
bool vis[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i<= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = n; i >= 1; --i)
        for(int j = 1; j <= n; ++j)
            for(int k = j + 1; k <= n; ++k)
                if(a[i] == a[j] + a[k] && !vis[i]) {
                    ans++;
                    vis[i] = 1;
                }
    cout << ans << endl;
    return 0;
}
