#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, day = 0;
    ll ans = 0;
    cin >> k;
    // 第i轮发放金币，每天发i个金币，连发i天
    for(int i = 1; ; ++i) {
        for(int j = 1; j <= i; ++j) {
            ans = ans + i;
            day++;
            if(day == k) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    return 0;
}
