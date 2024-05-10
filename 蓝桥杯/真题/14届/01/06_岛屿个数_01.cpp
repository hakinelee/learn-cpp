#include<bits/stdc++.h> 
using namespace std;

int a[60][60];

int T, M, N; 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	cin >> T;
	while(T--) {
		cin >> M >> N;
		for(int i = 0; i < M; ++i)
			for(int j = 0; j < N; ++j)
				cin >> a[i][j];
		
	}
	
	return 0;
}
