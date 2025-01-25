#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int fun(int n) {
    if(n == 0)
        return 1;
    else
        return n * fun(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll ans = 0;
    cin >> n;
    ans = fun(n);
    cout << ans << endl;
    return 0;
}
