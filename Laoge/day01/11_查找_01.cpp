#include<bits/stdc++.h>
using namespace std;

const int N = 1E6 + 10;
int n, m, x;
int a[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) 
		cin >> a[i];
	
	while(m--) {
		cin >> x;
		int l = 1, r = n;
		while(l < r) {
			int mid = (l + r) / 2;
			if(a[mid] >= x)
				r = mid;
			else
				l = mid + 1;
		}
		if(a[l] != x) {
			cout << -1 << " ";
			continue;
		}
		cout << l << " ";
	}
	return 0;
}
