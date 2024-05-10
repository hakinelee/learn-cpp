#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i)
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    cout << s;
    return 0;
}
