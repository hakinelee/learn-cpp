#include<bits/stdc++.h>
using namespace std;

int h[10001], w[10001];
const int N = 10010; 
int n, k;	// n块巧克力，k个小朋友 

bool check(int d) {	//检查够不够分 
	int num = 0;
	// 从第一块巧克力开始检查
	for(int i = 0; i < n; i++)
		num = num + (h[i] / d) * (w[i] / d);
	if(num >= k)
		return true;
	else
		return false;
}

int main() {
	cin>>n>>k;
	for(int i = 0; i<n; i++) {
		cin>>h[i]>>w[i];
	}
//	int d = 1;		// 正方形边长 
//	while(1) {
//		if(check(d))
//			d++;	// 从边长为 1 开始，一个一个暴力的试 
//		else
//			break;
//	}
//	cout<<d - 1;
	int l = 0, r = N;
	while(l < r) {
		int mid = (l + r) >> 1;
		if(check(mid))
			l = mid + 1;
		else
			r = mid;
	}
	cout<<l - 1;
	return 0;
}
