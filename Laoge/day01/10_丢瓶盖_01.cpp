#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a, b, e[N], sum;
bool check(int x) {
	int cnt = 1;	// 拿走第一个 
	int now = 1;	// 初始位置在第一个 
	for(int i = 2; i <= a; ++i) {
		if(e[i] - e[now] >= x) {
			cnt++;
			now = i;
		}
	}
	if(cnt >= b)
		return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> a >> b;
	for(int i = 1; i <= a; ++i) {
		cin >> e[i];
		sum += e[i];
	} 
	sort(e + 1, e + a + 1);
	int l = 0, r = sum;
	while(l < r) {
		int mid = l + r + 1 / 2;
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}
