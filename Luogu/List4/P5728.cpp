#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1005;
struct dataStu {
    int c, m, e, suma;
} a[N];
int n, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i].c >> a[i].m >> a[i].e;
        a[i].suma = a[i].c + a[i].m + a[i].e;
    }
    for(int i = 1; i <= n; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(abs(a[i].c - a[j].c) <= 5 && abs(a[i].m - a[j].m) <= 5 && abs(a[i].e - a[j].e) <= 5 && abs(a[i].suma - a[j].suma) <= 10)
                ans++;
    cout << ans << endl;
    return 0;
}
