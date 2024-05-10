#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    int maxa = 0, mina = 1010;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> t;
        if(t > maxa)
            maxa = t;
        if(t < mina)
            mina = t;
    }
    cout << maxa - mina << endl;
    return 0;
}
