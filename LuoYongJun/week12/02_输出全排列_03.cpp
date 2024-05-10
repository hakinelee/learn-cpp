#include<bits/stdc++.h> 
using namespace std;

int n;
bool used[10];	// ���ʱ�� 
int a[10];	// Ҫ���е����� 
int b[10];	// ���к������ 

void dfs(int x) {
	if(x == n + 1) {	// ���һ�㣬���� ��� 
		for(int i = 1; i <= n; ++i) 
			cout << setw(5) << b[i];
		cout << endl;
		return;	
	}
	
	for(int i = 1; i <= n; ++i) {
		if(used[i] == 0) {	// δ�ù� 
			used[i] = 1;
			b[x] = a[i];
			dfs(x + 1);
			used[i] = 0;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; ++i) 
		a[i] = i;
	
	dfs(1);	
	return 0;
}
