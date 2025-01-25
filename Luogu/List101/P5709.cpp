#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, t, s;
    cin >> m >> t >> s;
    if(t == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(s % t == 0) //如果s是t的整数倍
        cout << max(m - s / t, 0) << endl;
    else
        cout << max(m - s / t - 1, 0) << endl;
    return 0;
}
