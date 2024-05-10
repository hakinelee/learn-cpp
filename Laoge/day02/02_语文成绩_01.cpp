#include<bits/stdc++.h> 
using namespace std;

const int N = 5e6 + 10;
int n, p, x, y, z, a[N], c[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> p;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		c[i] = a[i] - a[i - 1];
	}
	for(int i = 1; i <= p; i++) {
		cin >> x >> y >> z;
		c[x] += z;
		c[y + 1] -= z;
	}
	for(int i = 1; i <= n; ++i)
		a[i] = a[i - 1] + c[i];
	
	sort(a + 1, a + n + 1);
	cout << a[1];
	return 0;
}
