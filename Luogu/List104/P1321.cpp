#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'b') {
            ans1++;
            continue;
        }
        if(s[i] == 'o' && s[i - 1] != 'b') {
            ans1++;
            continue;
        }
        if(s[i] == 'y' && s[i - 1] != 'o') {
            ans1++;
            continue;
        }

        if(s[i] == 'g') {
            ans2++;
            continue;
        }
        if(s[i] == 'i' && s[i - 1] != 'g') {
            ans2++;
            continue;
        }
        if(s[i] == 'r' && s[i - 1] != 'i') {
            ans2++;
            continue;
        }
        if(s[i] == 'l' && s[i - 1] != 'r') {
            ans2++;
            continue;
        }
    }
    cout << ans1 << endl << ans2 << endl;
    return 0;
}
