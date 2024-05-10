#include<bits/stdc++.h> 
using namespace std;

#define ll long long
const int N = 1e6 + 10;
ll n, m, maxa, sums, a[N];
bool check(ll x) {
	sums = 0;
	for(int i = 1; i <= n; ++i) {
		if(a[i] > x)
			sums += a[i] - x;
	}
	if(sums >= m)	// ¾âÆ¬Ì«µÍÁË 
		return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		if(a[i] > maxa)
			maxa = a[i];
	}
	ll l = 0, r = maxa;
	while(l < r) {
		ll mid = l + r + 1 >> 1;
		if(check(mid))	// ¾âÆ¬Ì«µÍ 
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}
