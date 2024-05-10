#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, pre, next, cnt = 1, maxa = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> next;
        if(next == pre + 1)
            cnt++;
        else
            cnt = 1;
        if(cnt > maxa)
            maxa = cnt;
        pre = next;
    }
    cout << maxa << endl;
    return 0;
}
