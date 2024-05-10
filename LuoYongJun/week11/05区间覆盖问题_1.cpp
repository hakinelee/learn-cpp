#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct data {
	ll l, r;	// 区间左值l 右值r 
} a[100005];

bool cmp_fu(data x, data y) {
	return 	x.l < y.l;
}

int main() {
	int n;		// 区间个数n 
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a[i].l>>a[i].r;
	}
	sort(a + 1, a + n + 1, cmp_fu);
	ll end = -1, ans = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i].r >= end) {
			ans = ans + a[i].r - max(end, a[i].l) + 1;
			end = a[i].r + 1;
		}
	}
	cout<<ans;
	return 0;
}
