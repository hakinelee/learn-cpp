#include<bits/stdc++.h>
using namespace std;

#define ll long long
//const int N = 105;
int a[105], dp[105][105];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, sum = 0, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = sum; j > 0; --j) {
			if()
		}
	}
	
	
	return 0;
}
