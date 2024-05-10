#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 105;
int a[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << a[1] << endl;
    return 0;
}
