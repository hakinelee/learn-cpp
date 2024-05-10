#include<bits/stdc++.h> 
using namespace std;

const int N = 1e5 + 10;
int n, m, l, r, a[N], s[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++) {
		cin >> l >> r;
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}
