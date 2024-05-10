#include<bits/stdc++.h> 
using namespace std;

#define ll long long
const int N = 1e6 + 10;
ll n, m, sum;
ll a[N], b[N]; // a[]学校线 , b[]估分 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;
	for(int i = 1; i <= m; ++i)
		cin >> a[i];
	for(int i = 1; i <= n; ++i)
		cin >> b[i];
	sort(a + 1, a + m + 1);
	
	for(int i = 1; i <= n; ++i) {
		if(b[i] <= a[1]) {
			sum += a[1] - b[i];
			continue;
		}
		if(b[i] >= a[m]) {
			sum += b[i] - a[m];
			continue;
		}
		int hi = upper_bound(a + 1, a + m + 1, b[i]) - a;
		sum += min(abs(a[hi] - b[i]), abs(a[hi - 1] - b[i]));
	}
	cout << sum;
	return 0;
}
