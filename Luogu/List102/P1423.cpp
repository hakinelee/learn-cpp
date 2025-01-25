#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double s;
    double q = 0.98;
    cin >> s;
    cout << ceil(log(1 - s * (1 - q) / 2) / log(q)) << endl;
    return 0;
}
