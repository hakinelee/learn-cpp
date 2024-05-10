#include<bits/stdc++.h> 
using namespace std;

struct plane {
	int t, d, l;	// t��������Ͽ� , d ����ʱ��, l����ʱ�� 
} a[15];
int T, N;
bool flag;			// ����Ƿ�ȫ����
bool vis[15];		// true����  falseδ���� 

void dfs(int m, int cnt, int last) {
	if(cnt == m) {	// �ɹ�����ķɻ����� == m 
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
