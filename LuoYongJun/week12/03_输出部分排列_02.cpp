#include<bits/stdc++.h> 
using namespace std;
// �����������
int n, m;
bool used[10];
int a[10];	// ԭ����
int b[10]; 	// �������� �� ���� 
void dfs(int x) {
	if(x == m + 1) {
		for(int i = 1; i <= m; ++i)
			cout << setw(5) << b[i];
		cout << endl;
		return;
	}
	for(int i = 1; i <= n; ++i) {	// ��һ�����еĽ�� 
		if(used[i] == 0) {
			used[i] = 1;
			b[x] = a[i];
			dfs(x + 1);	// ��һ��
			used[i] = 0;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
		a[i] = i;
	dfs(1);
	return 0;
}
