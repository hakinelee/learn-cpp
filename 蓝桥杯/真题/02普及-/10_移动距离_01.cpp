#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int w, m, n, x, y, s1, s2, k1, k2;
	cin >> w >> m >> n;
	s1 = m / w;		// m在 前s+1排 
	s2 = n / w;
	k1 = m % w;		// m距离一边k1 
	k2 = n % w;
	if(k1 == 0) {	// m在两端时 
		s1 -= 1;
	}
	if(k2 == 0) {
		s2 -= 1;
	}
	x = abs(s1 - s2);	// 水平距离 
	if(x % 2 != 0) {
		k1 = w - k1 + 1;
	}
	y = abs(k1 - k2);	// 垂直距离
	cout << x + y << endl;
	return 0;
}
