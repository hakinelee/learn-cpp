#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

#define N 105
unsigned int a[N];

bool isPrime(int m) {
    if(m < 2)
        return false;
    for(int i = 2; i * i <= m; i++)
        if(m % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    int idx = 0;
    cin >> n;
    while(n--) {
        cin >> t;
        if(isPrime(t))
            a[idx++] = t;
    }
    for(int i = 0; i < idx; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
