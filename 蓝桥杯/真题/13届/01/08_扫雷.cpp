#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int g[N][N], k[N][N];
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, m;

int dfs(int x, int y) {
	int res = 0;
	if(g[x][y] == 1) 
		return 9;
	for(int i = 0; i < 8; i++)
		if(g[x + dx[i]][y + dy[i]] == 1) 
			res++;
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
	  		cin >> g[i][j];
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++)
	  		printf("%d ", dfs(i, j));
		cout << '\n';
	}
  	return 0;
}
