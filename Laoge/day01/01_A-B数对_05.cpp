#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 10;
ll a[N], c, n, cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> c;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	
	for(int i = n; i > 0; --i) {
		ll b = a[i] - c;
		int lo = lower_bound(a + 1, a + n + 1, b) - a;
		int hi = upper_bound(a + 1, a + n + 1, b) - a - 1;// upper_bound(a + 1, a + n + 1, b) 查找数组中第一个大于 b 的元素
		if(lo < 0 || hi < 0) {
			continue;
		}
		else
			cnt += hi - lo + 1;
	}
	cout << cnt;
	return 0;
}
