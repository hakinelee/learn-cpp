#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, idx = 1;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n - i + 1; ++j) {
            cout << setfill('0') << setw(2) << idx;
            idx++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
