#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[10], num[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= 7; ++i)
        cin >> a[i];
    for(int k = 1; k <= n; ++k) {
        int ans = 0;
        for(int i = 1; i <= 7; ++i) {
            int x;
            cin >> x;
            for(int j = 1; j <= 7; ++j)
                if(a[j] == x)
                    ans++;
        }
        num[ans]++;
    }
    for(int i = 7; i >= 1; --i)
        cout << num[i] << " ";
    cout << endl;
    return 0;
}
