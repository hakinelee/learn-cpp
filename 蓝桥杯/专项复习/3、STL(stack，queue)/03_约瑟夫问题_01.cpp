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
		for(int i = 1; i < m; ++i) {	// �� 1 ��ʼ����
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << " ";		// �������� m 
		que.pop();
	}
	return 0;
}
