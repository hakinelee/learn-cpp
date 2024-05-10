#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

struct Tree {
    ll l, r;    // 区间左值l 右值r
} a[10005];

bool cmp(Tree x, Tree y) {
    return  x.l < y.l;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int l, m;       // 马路的长度l 区域的数目 m
    cin >> l >> m;
    for(int i = 1; i <= m; i++)
        cin >> a[i].l >> a[i].r;
    sort(a + 1, a + m + 1, cmp);
    ll end = -1, ans = 0;
    for(int i = 1; i <= m; i++)
        if(a[i].r >= end) {
            ans += (a[i].r - max(end, a[i].l) + 1);
            end = a[i].r + 1;
        }
    cout << l - ans + 1 << endl;
    return 0;
}
