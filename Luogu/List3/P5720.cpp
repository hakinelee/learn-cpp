#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, ans = 1;
    cin >> a;
    while(a != 1) {
        a /= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
