#include<bits/stdc++.h> 
using namespace std;
// 输出二进制数 
int n = 4, b[10]; 
void dfs(int x) {
	if(x == 4) {
		for(int i = 1; i <= 3; ++i)
			cout << setw(5) << b[i];
		cout << endl;
		return;
	}
	else {
		b[x] = 0;
		dfs(x + 1);	// 下一层
		b[x] = 1;
		dfs(x + 1);
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	dfs(1);
	return 0;
}
