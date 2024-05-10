#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 200005;
int n, ans = 1, a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 2; i <= n; ++i) {
        if(a[i] == a[i - 1])
            ans++;
        else {
            cout << a[i - 1] << ' ' << ans << endl;
            ans = 1;//初始化ans
        }
    }
    cout << a[n] << ' ' << ans << endl;
    return 0;
}
