#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	queue<int> que;
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
		que.push(i);
	while(!que.empty()) {
		for(int i = 1; i < m; ++i) {	// 从 1 开始报数
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << " ";		// 当报数到 m 
		que.pop();
	}
	return 0;
}
