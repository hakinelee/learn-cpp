#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 0x3f3f3f3f
const int N = 1E5 + 10;
int n, c;	// n个牛棚，c头牛
int a[N];

bool check(int m) {
	int d = 0;	// 相邻牛棚间隔 
	int cnt = 1;
	for(int i = 2; i <= n; i++) {
		d += a[i] - a[i - 1];
		if(d >= m) {
			cnt++;
			d = 0;
		}
	}
	return cnt >= c;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> c;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	
	int l = 0;
	int r = INF;
		
	while(l + 1 < r) {
		int mid = (l + r) >> 1;
		if(check(mid))
			l = mid;
		else
			r = mid;
	}
	cout << l << endl;
	return 0;
}
