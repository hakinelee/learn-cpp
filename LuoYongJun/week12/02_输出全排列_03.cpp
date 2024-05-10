#include<bits/stdc++.h> 
using namespace std;

int n;
bool used[10];	// 访问标记 
int a[10];	// 要排列的数组 
int b[10];	// 排列后的数组 

void dfs(int x) {
	if(x == n + 1) {	// 最后一层，排列 完成 
		for(int i = 1; i <= n; ++i) 
			cout << setw(5) << b[i];
		cout << endl;
		return;	
	}
	
	for(int i = 1; i <= n; ++i) {
		if(used[i] == 0) {	// 未用过 
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
