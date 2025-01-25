#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

string s;
int a[30], maxn = 0, minn = 110;

bool is_prime(int x) {
    if(x < 2)
        return false;
    for(int i = 2; i <= x / i; i++)
        if(x % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s;
    for(int i = 0; i < s.size(); i++)
        a[s[i] - 'a' + 1]++;
    for(int i = 1; i <= 26; i++) {
        if(a[i] > maxn && a[i] != 0)
            maxn = a[i];
        if(a[i] < minn && a[i] != 0)
            minn = a[i];
    }
    if(is_prime(maxn - minn)) {
        cout << "Lucky Word" << endl;
        cout << maxn - minn << endl;
    }
    else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}
