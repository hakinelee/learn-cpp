#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t, l, r;
    string s, st;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t == 1) {
            cin >> st;
            s += st;
            cout << s << endl;
        }
        else if(t == 2) {
            cin >> l >> r;
            s = s.substr(l, r);
            cout << s << endl;
        }
        else if(t == 3) {
            cin >> l >> st;
            s = s.insert(l, st);
            cout << s << endl;
        }
        else if(t == 4) {
            cin >> st;
            cout << (int)s.find(st) << endl;
        }
    }
    return 0;
}
