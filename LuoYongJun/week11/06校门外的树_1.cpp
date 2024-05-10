#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct data {
	ll l, r;	// ������ֵl ��ֵr 
} a[10005];

bool cmp_shu(data x, data y) {
	return 	x.l < y.l;
}

int main() {
	int l, m;		// ��·�ĳ���l �������Ŀ m
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
