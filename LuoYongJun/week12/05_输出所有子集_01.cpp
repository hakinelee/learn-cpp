#include<bits/stdc++.h> 
using namespace std;
// 输出它所有的子集
char a[4] = {' ', 'a', 'b', 'c'};
int b[10]; 
void dfs(int x) {
	if(x == 4) {
		for(int i = 1; i <= 3; ++i)
			if(b[i])
				cout << setw(5) << a[i];
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
