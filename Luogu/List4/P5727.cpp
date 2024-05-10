#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 205;
int n, a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int idx = 1;
    cin >> n;
    a[0] = n;
    while(n != 1) {
        if(n % 2 != 0)
            n = n * 3 + 1;
        else
            n = n / 2;
        a[idx++] = n;
    }
    for(int i = idx - 1; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
