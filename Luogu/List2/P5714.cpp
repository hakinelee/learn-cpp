#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double m, h;
    cin >> m >> h;
    double ans = m / (h * h);
    if(ans < 18.5) {
        cout << "Underweight" << endl;
    }
    else if(ans >= 18.5 && ans < 24) {
        cout << "Normal" << endl;
    }
    else {
        cout << setw(6) << ans << endl;
        cout << "Overweight" << endl;
    }
    return 0;
}
