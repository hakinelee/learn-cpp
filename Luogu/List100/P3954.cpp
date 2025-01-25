#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
#define INL -0x3f3f3f3f
#define PII pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int ans = a * 0.2 + b * 0.3 + c * 0.5;
    cout << ans << endl;
    return 0;
}
