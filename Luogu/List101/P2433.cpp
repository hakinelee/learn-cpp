#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const double PI = 3.141593;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    if(T == 1) {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    }
    else if (T == 3) {
        cout << 14 / 4  << endl;
        cout << 14 - (14 % 4) << endl;
        cout << 14 % 4 << endl;
    }
    else if (T == 4) {
        cout << setw(6) << (double) 500 / 3 << endl;
    }
    else if (T == 5) {
        cout << (260 + 220) / (20 + 12) << endl;
    }
    else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7) {
        cout << 100 + 10 << endl;
        cout << 100 + 10 - 20 << endl;
        cout << 0 << endl;
    }
    else if (T == 8) {
        int r = 5;
        cout << PI * r * 2 << endl;
        cout << PI * r * r << endl;
        cout << PI * r * r * r * 4 / 3 << endl;
    }
    else if (T == 9) {
        int ans = (((1 + 1) * 2 + 1) * 2 + 1) * 2;
        cout << ans << endl;
    }
    else if (T == 10) {
        cout << 9 << endl;
    }
    else if (T == 11) {
        cout << (double)100 / (8 - 5) << endl;
    }
    else if (T == 12) {
        cout << (int)('M' - 'A') + 1 << endl;
        cout << (char)(18 + 'A' - 1) << endl;
    }
    else if (T == 13) {
        cout << 16 << endl;
    }
    else if (T == 14) {
        cout << 50 << endl;
    }
    return 0;
}
