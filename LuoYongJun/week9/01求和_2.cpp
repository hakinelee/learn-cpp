#include<bits/stdc++.h>
using namespace std;
#define ll long long
// 求和（前缀和） 
int main() {
	ll n;
	cin>>n;
	vector<ll> a(n+1, 0);
	for(ll i = 1; i <= n; i++) {	// 输入 
		cin>>a[i];
	}
	vector<ll> prefix(n+1, 0);
	for(ll i = 1; i <= n; i++) {
		prefix[i] = prefix[i-1] + a[i];
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i++) {
		ans = ans + a[i] * (prefix[n] - prefix[i]);
	} 
	cout<<ans;
	return 0;
}
