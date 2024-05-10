#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int h, r;
    cin >> h >> r;
    // 向上取整
    int ans = 20000 / (3.14 * r * r * h) + 1;
    cout << ans << endl;
    return 0;
}
