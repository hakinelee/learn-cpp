#include<bits/stdc++.h>
using namespace std;

const int N = 50010;
int m, n, len, maxa, a[N];

bool check(int x) {
	int cnt = 0;
	int now = 0; 	// 当前位置 
	for(int i = 1; i <= n + 1; ++i) {	// 下一步的位置 
		if(a[i] - a[now] < x)
			cnt++;
		else
			now = i;
	}
	if(cnt <= m)
		return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> len >> n >> m;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	a[0] = 0;
	a[n + 1] = len;
	 
	if(n == 0) {
		cout << len;
		return 0;
	}
	
	long long l = 0, r = 1e10;
	while(l < r) {
		int mid = l + r + 1 >> 1; 
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}
