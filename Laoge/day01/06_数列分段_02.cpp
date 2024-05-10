#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10; 
ll n, m, a[N], sum, maxa;
bool check(ll x) {
	ll cnt = 1, summ = 0;
	for(int i = 1; i <= n-1; i++)	{
		summ += a[i];
		if(summ + a[i+1] > x) {//不能满足 "区间间距小于最大距离"，那就分段 
			cnt++;
			summ = 0;
		}
	}
	// 总的段数小于等于需要的段数，这样都能满足mid为每段的最大值，
	// 那么多分几段，肯定还能满足 
	if(cnt <= m) 	
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
		sum += a[i];
		if(a[i] > maxa)
			maxa = a[i];
	}	
	
	
	ll l = maxa, r = sum;
	while(l < r) {
		ll mid = l + r >> 1;
		if(check(mid))
			r = mid;
		else
			l = mid + 1;
	}
	cout << l;
	return 0;
}
