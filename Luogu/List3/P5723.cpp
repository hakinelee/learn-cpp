#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool is_prime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll ans = 0, cnt = 0;
    cin >> n;
    for(int i = 2; ; ++i) {
        if(is_prime(i)) {
            ans += i;
            cnt++;
            if(ans <= n)
                cout << i << endl;
        }
        if(ans > n) {
            cout << cnt - 1 << endl;
            return 0;
        }
    }
    return 0;
}
