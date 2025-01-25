#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d > b) {
        cout << c - a << " ";
        cout << d - b << endl;
    }
    else {
        cout << c - a - 1 << " ";
        cout << d + 60 - b << endl;
    }
    return 0;
}
