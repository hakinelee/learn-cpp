#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, i = 1;
    cin >> k;
    double sum = 0;
    while(sum <= k) {
        sum = sum + 1.0 / i;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}
