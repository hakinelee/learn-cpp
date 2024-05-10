#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct data {
	ll l, r;	// 区间左值l 右值r 
} a[10005];

bool cmp_shu(data x, data y) {
	return 	x.l < y.l;
}

int main() {
	int l, m;		// 马路的长度l 区域的数目 m
	cin>>l>>m;
	for(int i = 1; i <= m; i++) {
		cin>>a[i].l>>a[i].r;
	}
	sort(a + 1, a + m + 1, cmp_shu);
	ll end = -1, ans = 0;
	for(int i = 1; i <= m; i++) {
		if(a[i].r >= end) {
			ans = ans + (a[i].r - max(end, a[i].l) + 1);
			end = a[i].r + 1;
		}
	}
	cout<<l - ans + 1;
	return 0;
}
