#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define N 20
int n, t, a[N];
bool v[N];

bool isPrime(int x, int y) {
    int z = x + y;
    for(int i = 2; i <= sqrt(z); i++)
        if(z % i == 0)
            return 0;
    return 1;
}

void dfs(int k) {
    if(k == n + 1) {
        if(isPrime(a[n], a[1])) {
            for(int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    else {
        for(int i = 1; i <= n; i++) {
            if(k == 1 && !v[i]) {
                v[i] = 1;
                a[k] = i;
                dfs(k + 1);
                v[i] = 0;
            }
            else if(!v[i] && isPrime(a[k - 1], i)) {
                v[i] = 1;
                a[k] = i;
                dfs(k + 1);
                v[i] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(scanf("%d", &n) != EOF) {
        printf("Case %d:\n", ++t);
        dfs(1);
        cout << endl;
    }
    return 0;
}

