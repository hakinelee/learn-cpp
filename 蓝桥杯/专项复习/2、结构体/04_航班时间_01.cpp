#include <bits/stdc++.h>
using namespace std;
 
int f() {
    int h1, m1, s1, h2, m2, s2, d = 0;
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    if(getchar() == ' ') {
        scanf("(+%d)", &d);
    }
    return (d * 86400 + h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    scanf("%d", &t);
    while(t--) {
        int ans = (f() + f()) / 2;
        printf("%02d:%02d:%02d\n", ans / 3600, ans % 3600 / 60, ans % 60);
    }
    return 0;
}
