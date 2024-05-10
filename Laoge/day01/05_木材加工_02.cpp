#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 10;
ll n, k, len, sum, maxa, a[N];

bool check(ll x) {
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
		cnt += a[i] / x;
	if(cnt >= k)
		return true;
	return false;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i = 1; i <= n; ++i)	{
		cin >> a[i];
		sum += a[i];
		if(a[i] > maxa)
			maxa = a[i];
	}
	
	if(sum < k * 1) {	// 1cm长的小段都切不出来，输出 0
		cout << 0;
		return 0;
	}
	
	ll l = 1, r = maxa;
	while(l < r) {
		ll mid = l + r + 1 >> 1;
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}

