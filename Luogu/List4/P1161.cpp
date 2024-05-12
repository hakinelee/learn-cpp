#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 2000005;
int n, t;
double a;
bool b[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a >> t;
        for(int i = 1; i <= t; ++i) {
            if(b[(int)(i * a)])
                b[(int)(i * a)] = 0;
            else
                b[(int)(i * a)] = 1;
        }
    }
    for(int i = 1; i <= N; ++i)
        if(b[i] == 1)
            cout << i << endl;
    return 0;
}
