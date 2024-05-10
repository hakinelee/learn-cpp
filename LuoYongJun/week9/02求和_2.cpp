#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 200010;
ll a[N], prefix[N];
// 可获得的最小取值 
int main() {
	ll n, k;
	cin>>n>>k;
	for(ll i = 1; i <= n; i++) {	// 输入 
		cin>>a[i];
	}
	sort(a+1, a+1+n);	// 排序 

	for(ll i = 1; i <= n; i++) {
		prefix[i] = prefix[i-1] + a[i];
	}
	
	ll ans = 1e18;
	for(ll i = 1; i <= k; i++) {
		ans = min(prefix[n] - prefix[n+i-k], );
		ans = ans + a[i] * (prefix[n] - prefix[i]);
	} 
	cout<<ans;
	return 0;
}
