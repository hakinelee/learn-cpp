#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, idx = 1, idy = 1;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << setfill('0') << setw(2) << idx;
            idx++;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= 2 * (n - i); ++j)
            cout << " ";
        for(int j = 1; j <= i; ++j) {
            cout << setfill('0') << setw(2) << idy;
            idy++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
