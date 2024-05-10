#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n, m, a[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) 
		cin >> a[i];
	for(int i = 1; i <= m; ++i) {
		int q, p;
		cin >> q;
		p = lower_bound(a + 1, a + n + 1, q) - a;
		if(a[p] != q) {
			cout << -1 << " ";
			continue;
		}
		cout<< p << " ";
	}
	return 0;
}
