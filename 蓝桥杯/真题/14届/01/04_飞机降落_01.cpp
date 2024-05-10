#include<bits/stdc++.h> 
using namespace std;

struct plane {
	int t, d, l;	// t到达机场上空 , d 继续时间, l降落时间 
} a[15];
int T, N;
bool flag;			// 标记是否安全降落
bool vis[15];		// true降落  false未降落 

void dfs(int m, int cnt, int last) {
	if(cnt == m) {	// 成功降落的飞机数量 == m 
		flag = true;
		return ;
	}
	for(int i = 0; i < m; ++i) {
		if(!vis[i] && a[i].t + a[i].d >= last) {
			vis[i] = true;
			dfs(m, cnt + 1, max(last, a[i].t) + a[i].l);
			vis[i] = false;
		}
	}
	return ;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	cin >> T;
	while(T--) {
		cin >> N;
		flag = false;
		for(int i = 0; i < N; ++i)
			cin >> a[i].t >> a[i].d >> a[i].l;
		
		dfs(N, 0, 0);
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
