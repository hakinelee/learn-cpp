#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    cin >> x;
    if(x % 2 == 0 && x > 4 && x <= 12)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if(x % 2 == 0 || (x > 4 && x <= 12))
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if((x % 2 != 0 && x > 4 && x <= 12) || (x % 2 == 0 && (x <= 4 && x > 12)))
        cout << 1 << " ";
    else
        cout << 0 << " ";
    if(x % 2 != 0 && (x <= 4 || x > 12))
        cout << 1 << " ";
    else
        cout << 0 << " ";
    return 0;
}
