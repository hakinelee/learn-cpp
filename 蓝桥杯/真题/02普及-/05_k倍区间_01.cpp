#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 10;
ll n, k, t, s[N], m[N], cnt;	//s前缀和数组，m用于存储模数

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) {
		cin >> t;
		s[i] = s[i - 1] + t;
	}
	for(int i = 0; i <= n; ++i) {
		cnt += m[s[i] % k]++;//有n个模数相同中间就有(n-1)段和为k的倍数
	}
	cout << cnt;
	return 0;
}
