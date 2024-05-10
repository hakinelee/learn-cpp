#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define INF 0x3f3f3f3f
using namespace std;
// �������룺DFS��2^n��

const int N = 1e5 + 10;
int a[N];
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

//u��ʾ��ǰ���ǵ��˵ڼ�λ��
//last��ʾ���������Ѿ�ѡ�˵����һ�������Ƕ���
//cnt��ʾ��������һ���ж��ٸ�����
void dfs(int u, int cnt, int last) {
	if(u >= n) {
		ans = max(ans, cnt);
		return ;
	}
	// ������Խ����Ż���
	// �����ʱʣ�µ��������� + �Ѿ�ѡ�����cnt��û�� ��ǰ���ֵans�� ���ǾͲ���Ҫ���������� 
	if(n - u + cnt <= ans) {
		return ;
	}

	//��uλ��ѡ�����ѡ�������
	//�ͱ����ǰ�����һ�����ֹ��ɽ������С�
	if(last == -1 || get_final(last) == get_first(a[u]))
		dfs(u + 1, cnt + 1, a[u]);

	//��u������ѡ
	dfs(u + 1, cnt, last);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];

	dfs(0, 0, -1);
	cout << n - ans << endl;
	return 0;
}
