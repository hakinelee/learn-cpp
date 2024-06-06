#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    int ans = 0;
    getline(cin, s);    // 防止忽略空格
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'r')
            ans += (s[i] - 'a') % 3 + 1;
        if(s[i] >= 't' && s[i] <= 'y')
            ans += (s[i] - 't') % 3 + 1;
        if(s[i] == 's' || s[i] == 'z')
            ans += 4;
        if(s[i] == ' ')
            ans++;
    }
    cout << ans << endl;
    return 0;
}
