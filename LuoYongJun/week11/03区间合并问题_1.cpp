#include<bits/stdc++.h>
using namespace std;

// 求不重叠区间的个数
#define ll long long
struct qu {
	ll l, r;	// 区间左值、右值 
} a[100005];
 
bool cmp_qu(qu x, qu y) {	// 按区间左端点升序 
	return x.l < y.l;
}

int main() {
	ll n;		// 区间的数目
	cin>>n; 
	for(ll i = 1; i <= n; i++)
		cin>>a[i].l>>a[i].r;
	sort(a+1, a+n+1, cmp_qu);
	ll ans = 0;				// 不重叠区间的个数
	ll end = -1;
	for(ll i = 1; i <= n; i++) {
		if(a[i].l > end) {	// 区间不相交 
			ans++;
			end = max(end, a[i].r);
		}
		else {				// 区间相交 
			end = max(end, a[i].r);
		}
	} 
	cout<<ans;
	return 0;
}
