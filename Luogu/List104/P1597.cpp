#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
#define INL -0x3f3f3f3f
#define PII pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll ans = 0;
    string s;
    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        s = to_string(i);
        if((s.find('2') != -1) || (s.find('0') != -1) || (s.find('1') != -1) || (s.find('9') != -1)) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
