#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    char a[15][15] = {'0'}, b[15][15] = {'0'};
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> b[i][j];

    // 这题太无聊了，以后闲着没事再写。。。
    return 0;
}
