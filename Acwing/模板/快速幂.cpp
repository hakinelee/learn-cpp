#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll qmi(int m, int k, int p) {
    ll res = 1 % p, t = m;
    while(k) {
        if(k&1) 
			res = res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll a, b, q;
	cin >> a >> b >> q;
	
//    printf("%lld^%lld mod %lld=%lld", a, b, q, qmi(a, b, q));
	cout << a << "^" << b << " mod " << q << "=" << qmi(a, b, q);
	return 0;
}
