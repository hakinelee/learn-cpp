#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x, cnt = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i) {
        string s = to_string(i);
        for(int j = 0; j < s.size(); ++j)
            if(s[j] - '0' == x)
                cnt++;
    }
    cout << cnt << endl;
    return 0;
}
