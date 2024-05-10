#include<bits/stdc++.h>
using namespace std;

const int N = 5E4 + 10;
int a[N];
int len, m, n;

bool check(int d) {	// 检查距离d是否合适 
	int num = 0;	// 搬走石头数量 
	int pos = 0;	// 当前站立的石头 
	for(int i = 1; i <= n; i++) {
		if(a[i] - pos < d) // 可以搬走
			num++;
		else
			pos = a[i];	   // 不可以搬走 
	}
	if(num <= m)
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> len >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	int l = 0;
	int r = len;
		
	while(l < r) {
		int mid = l + (r - l) / 2;
		if(check(mid))
			l = mid + 1;
		else
			r = mid - 1;
	}
	if(check(l) == 0)
		l -= 1;
	cout << l;
	return 0;
}
