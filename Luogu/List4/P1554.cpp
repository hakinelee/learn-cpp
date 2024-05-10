#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n, a[10] = {0};
    cin >> m >> n;
    for(int i = m; i <= n; ++i) {
        int j = i;
        while(j > 0) {
            a[j % 10]++;
            j /= 10;
        }
    }
    for(int i = 0; i <= 9; ++i)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
