#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 510;
int n, m, a[N][N], s[N][N];
ll k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
			
		}
	}
	return 0;
}
