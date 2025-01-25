#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == 'V' && s[i + 1] == 'K') {
            ans++;
            s[i] = 'X';
            s[i+1] = 'X';
        }
    }
    for(int i = 0; i < n - 1; i++) {
        if(s[i] != 'X' && s[i] == s[i + 1]) {
            ans++;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
