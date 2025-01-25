#include<bits/stdc++.h>
#define endl '\n'
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, temp = 0;
    cin >> n;
    // for(int i = 1; i <= n; i += 2) {
    //     if(is_prime(i) && n % i == 0)
    //         if(i > temp)
    //             temp = i;
    // }
    // cout << temp << endl;
    return 0;
}
