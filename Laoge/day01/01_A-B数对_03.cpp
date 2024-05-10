#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2E5 + 10;
int a[N];
int n, c;
ll cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>c;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	
	for(int i = n; i > 0; i--) {
		int b = a[i] - c;
		int lo = lower_bound(a + 1, a + n + 1, b) - a;
		int hi = upper_bound(a + 1, a + n + 1, b) - a;
		cnt += hi - lo;
	}
	cout<<cnt;
	return 0;
}
