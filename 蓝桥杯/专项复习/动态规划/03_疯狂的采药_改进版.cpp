#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;

const int N = 1e4 + 10;
const int M = 1e7 + 10;
ll t, m;
ll w[N], v[N];
ll dp[M];	// 到第i个草药为止，花费了j的时间的总价值 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t >> m;
	for(int i = 1; i <= m; ++i)
		cin >> w[i] >> v[i];
	for(int i = 1; i <= m; ++i) {
		for(int j = w[i]; j <= t; ++j) {
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[t] << endl;
	return 0;
}
