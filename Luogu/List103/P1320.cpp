#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

char x, pre = '0';
int n, ans[1000001], idx = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(cin >> x) {
        n++;
        if(x == pre)
            ans[idx]++;
        else {
            idx++;
            ans[idx]++;
            pre = x;
        }
    }
    cout << sqrt(n);
    for(int i = 1; i <= idx; i++)
        cout << " " << ans[i];
    cout << endl;
    return 0;
}
