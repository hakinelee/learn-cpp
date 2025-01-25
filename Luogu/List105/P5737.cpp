#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

#define N 3000
int a[N];

bool isLeap(int y) {
    if((y % 4 == 0) && (y % 100 != 0))
        return true;
    if(y % 400 == 0)
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, ans = 0, idx = 0;
    cin >> x >> y;
    for(int i = x; i <= y; i++) {
        if(isLeap(i)) {
            ans++;
            a[idx++] = i;
        }
    }
    cout << ans << endl;
    for(int i = 0; i < idx; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
