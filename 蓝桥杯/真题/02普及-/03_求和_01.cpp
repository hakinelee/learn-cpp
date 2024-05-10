#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 10;
ll a[N], s[N], n;
ll ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	// »¯¼ò¹«Ê½£ºsum = a1 * (a2 + a3 + ... + an) + a2 * (a3 + a4 + ... + an) + ... + an-1 * an
	for(int i = 1; i <= n - 1; ++i)
		ans += a[i] * (s[n] - s[i]);
	cout << ans;
	return 0;
}
