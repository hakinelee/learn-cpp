#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool isleap(int x) {
    if(x < 2)
        return 0;
    for(ll i = 2; i * i <= x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    if(isleap(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
