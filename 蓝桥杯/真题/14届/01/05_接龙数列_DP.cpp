#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define INF 0x3f3f3f3f
using namespace std;
// �������룺DFS��2^n��

const int N = 1e5 + 10;
int a[N], f[N][15];
int n, ans;

int get_first(int x) {		//��ȡ���ֵ����λ
	int res = 0;
	while(x) {
		res = x % 10;
		x /= 10;
	}
	return res;
}

int get_final(int x) {		//��ȡ���ֵ����һλ
	return x % 10;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	memset(f, INF, sizeof f);
	for(int i = 0; i < 10; i++)
		f[0][i] = 0;
	for(int i = 1; i <= n; i++) {
		// ɾ����i������ 
		for(int j = 0; j <= 9; j++) {
			f[i][j] = f[i - 1][j] + 1;
		} 
		// ������i������
		int final = get_final(a[i]);
		int first = get_first(a[i]);
		f[i][final] = min(f[i - 1][first], f[i][final]);
	}
	int ans = INF;
	for(int i = 0; i < 10; i++) {
		ans = min(ans, f[n][i]);
	}
	cout << ans << endl;
	return 0;
}
