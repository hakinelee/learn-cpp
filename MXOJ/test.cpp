#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
#define INL -0x3f3f3f3f
#define PII pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, sum;
    while(scanf("%d", &n) == 1) {
        // sum = n * (n + 1) / 2;  // 这里会爆int，进行改进
        sum = n / 2 * (n + 1);
        printf("sum = %lld\n", sum);
    }
    return 0;
}
