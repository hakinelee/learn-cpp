#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool is_prime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool check(int t) {
    string s = to_string(t);
    int l = 0, r = s.size() - 1;
    while(l < r) {
        if(s[l] == s[r])
            l++, r--;
        else
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int i =  a % 2 == 0 ? a + 1: a;
    for(i; i <= b; i += 2) {
        if(check(i) && is_prime(i))
            cout << i << endl;
    }
    return 0;
}
