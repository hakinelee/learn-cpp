#include<bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;

const int N = 105;
int dp[N][1010];	 //	到第i个草药为止，花费了 j的时间，得到的最大价值 
int t, m;
int w[N], v[N];	 	 // 时间w,  价值v
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t >> m;
	for(int i = 1; i <= m; ++i)
		cin >> w[i] >> v[i];
	for(int i = 1; i <= m; ++i) {
		for(int j = 1; j <= t; ++j) {
			if(j >= w[i])
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[m][t] << endl;
	return 0;
}
