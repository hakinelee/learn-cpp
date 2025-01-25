#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, re = 0, dep = 0;
    for(int i = 1; i <= 12; ++i) {
        cin >> x;
        if(x > re + 300) {
            cout << "-" << i << endl;
            return 0;
        }
        dep += (re + 300 - x) / 100 * 100;
        re = (re + 300 - x) % 100;
    }
    cout << re + dep * 1.2 << endl;
    return 0;
}
