#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for(int k = 1; ; ++k) {
        for(int x = 100; x >= 1; --x) {
            if(52 * (7 * x + 21 * k) == n) {
                cout << x << endl;
                cout << k << endl;
                return 0;
            }
        }
    }
    cout << endl;
    return 0;
}
