#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
#define INL -0x3f3f3f3f
#define PII pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for(int l = 0, r = s.size() - 1; l < r; l++, r--) {
        swap(s[l], s[r]);
    }
    cout << s << endl;
    return 0;
}
