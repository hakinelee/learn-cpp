#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int n, a[N], ans = 0;
double ave = 0;

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    for(int i = 2; i < n; ++i)
        ans += a[i];
    ave = ans * 1.0 / (n - 2);
    printf("%.2f\n", ave);
    return 0;
}
