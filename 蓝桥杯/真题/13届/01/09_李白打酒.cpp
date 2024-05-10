#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[210][105][105];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	// f[i][j][k] 表示走了 i 步，共有 j 次看花，此时共有 k斗酒
	dp[0][0][2] = 2; 
	ll cnt = 0;
	for(int i = 1; i <= n + m; ++i) {
		for(int j = 0; j <= m; ++j) {
			
		}
	}
	
	return 0;
}
