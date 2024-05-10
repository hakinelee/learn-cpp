#include<bits/stdc++.h>
using namespace std;

struct plane {
	int t, d, l;
} a[15]; 
bool vis[15];	// true降落  false 飞机未降落 
bool flag; 

void dfs(int m, int cnt, int last) {	// 此前所有飞机完成降落的时间 last
	if(cnt == m) {
		flag = true;
		return ;
	}
	for(int i = 0; i < m; i++) {
		if(!vis[i] && a[i].t + a[i].d >= last) {
			vis[i] = true;
			dfs(m, cnt + 1, max(last, a[i].t) + a[i].l);
			vis[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;	// N架飞机降落
		for(int i = 0; i < N; ++i)
			cin >> a[i].t >> a[i].d >> a[i].l;
		flag = false;
		dfs(N, 0, 0);
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
