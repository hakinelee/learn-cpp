#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;

const int N = 105;
int dp[1010];	 //	����i����ҩΪֹ�������� j��ʱ�䣬�õ�������ֵ 
int t, m;
int w[N], v[N];	 	 // ʱ��w,  ��ֵv
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t >> m;
	for(int i = 1; i <= m; ++i)
		cin >> w[i] >> v[i];
	for(int i = 1; i <= m; ++i) {
		for(int j = t; j >= w[i]; --j) {
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[t] << endl;
	return 0;
}
