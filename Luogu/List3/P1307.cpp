#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    if(s[0] >= '0' && s[0] <= '9' && s.size() > 1) {
        reverse(s.begin(), s.end());
        s.erase(0, s.find_first_not_of('0'));
        cout << s << endl;
    }
    else if(s[0] == '-') {
        s.erase(0, s.find_first_not_of('-'));
        reverse(s.begin(), s.end());
        s.erase(0, s.find_first_not_of('0'));
        cout << "-" << s << endl;
    }
    else
        cout << s << endl;
    return 0;
}
