#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    cin >> x;
    if(x % 4 == 0 && x % 100 != 0)
        cout << 1 << endl;
    else if(x % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
