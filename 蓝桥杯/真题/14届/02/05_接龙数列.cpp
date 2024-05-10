#include<bits/stdc++.h>
using namespace std;

int dp[10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string s;
	int m = 0;
	for(int i = 0; i < n; ++i) {
		cin >> s;
		int x = s[0] - '0';
		int y = s[s.size() - 1] - '0';
		dp[y] = max(dp[x] + 1, dp[y]);
		m = max(m, dp[y]);
	}
	cout << n - m << endl;
	return 0;
}
