// #include<bits/stdc++.h
#include <iostream>
#define endl '\n'
#define ll long long
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;
    for(int i = 2; (ll) i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 1; i <= (n - 2) / 2; i++) {
        int x = 0, y = 0;
        for(int x = 2; x < 2 * i + 2; x++) {
            y = 2 * i + 2 - x;
            if(isPrime(x) && isPrime(y)) {
                cout << 2 * i + 2 << "=" << x << "+" << y << endl;
                break;
            }
        }
    }
    return 0;
}
