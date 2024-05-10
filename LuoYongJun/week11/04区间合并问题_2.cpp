#include<bits/stdc++.h>
using namespace std;

// 求不重叠的区间
#define ll long long
struct qu{
	ll l, r;	// 区间左值、右值 
} a[100005];

bool cmp_qu(qu x, qu y) {	// 按区间左端点升序 
	return x.l < y.l;
}

int main() {
	ll n;		// 区间的数目
	cin>>n; 
	for(ll i = 1; i <= n; i++) {
		cin>>a[i].l>>a[i].r;
	}
	sort(a + 1, a + n + 1, cmp_qu);
	ll first = a[1].l, end = a[1].r;
	for(ll i = 1; i <= n; i++) {
		if(a[i].l > end) {	// 区间不相交
			cout<<first<<" "<<end<<endl;
			end = max(end, a[i].r);
			first = a[i].l;
			end = a[i].r;
		}
		else {				// 区间相交 
			end = max(end, a[i].r);
		}
	}
	cout<<first<<" "<<end<<endl;
	return 0;
}
