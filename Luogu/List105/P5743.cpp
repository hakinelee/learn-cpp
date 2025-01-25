#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 1;
    cin >> n;
    for(int i = 1; i < n; i++) {
        ans += 1;   // 贪吃的那1个
        ans *= 2;   // 吃的那一半要加上那1个
    }
    cout << ans << endl;
    return 0;
}
