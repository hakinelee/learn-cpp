#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
#define INL -0x3f3f3f3f
#define PII pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", s);
    return 0;
}
