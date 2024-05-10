#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, ans = 0;
	cin >> n;
	for(int i = 1; i < n; ++i) {
		int p = i * i;
		if(n&1 && p % n < (n + 1) / 2)
			ans++;
		if(n&1 == 0 && p % n < n / 2)
			ans++;
	}
	cout << ans;
	return 0;
}
