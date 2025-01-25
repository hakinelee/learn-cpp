#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    int n, k, cntA = 0, cntB = 0;
    ll sumA = 0, sumB = 0;
    double aveA = 0, aveB = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) {
            sumA += i;
            cntA++;
        }
        else {
            sumB += i;
            cntB++;
        }
    }
    aveA = sumA * 1.0 / cntA;
    aveB = sumB * 1.0 / cntB;
    printf("%.1f %.1f", aveA, aveB);
    return 0;
}
