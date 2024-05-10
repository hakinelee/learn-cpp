#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int a[N][N], b[N][N];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};	// 四个方向 (左上、左、左下、右下、右、上)
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(a[i][j] == 1)
				b[i][j] = 9;
			else {
				int t = 0;
				for(int l = 0; l < 8; ++l) {	// 遍历它的八个邻接
					int nx = i + dx[l];		// 一个邻居的坐标 
					int ny = j + dy[l];
					if(nx < 0 || ny < 0 || nx >= n || ny >= m)
						continue;
					if(a[nx][ny] == 1)
						t++;
				}
				b[i][j] = t;			
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j)
			cout << b[i][j] << " ";
		cout << endl;
	}
	return 0;
}
