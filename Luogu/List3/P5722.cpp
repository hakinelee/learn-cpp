#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll ans = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        ans += i;
    cout << ans << endl;
    return 0;
}
