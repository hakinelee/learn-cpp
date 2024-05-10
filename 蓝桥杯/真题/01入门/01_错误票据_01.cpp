#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10;
int n, a[N], cnt, ans1, ans2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	while(cin >> a[cnt]) {
		cnt++;
	}
	sort(a, a + cnt);
	for(int i = 0; i < cnt; ++i) {
		if(a[i + 1] - a[i] > 1)
			ans1 = a[i] + 1; 
		if(a[i + 1] == a[i])
			ans2 = a[i];
	}
	cout << ans1 << " " << ans2;
	return 0;
}
