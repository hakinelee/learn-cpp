#include<bits/stdc++.h>
using namespace std;

#define ll long long 
const int N =  
int len, m, n, a[N];
bool check(int x) {
	int cnt = 0;		// �����ߵ�ʯͷ 
	int i = 0, now = 0;	// i��ʾĿ��λ�ã�nowΪ��ǰλ�á�
	while(i < n + 1) {
		i++;
		if(a[i] - a[now] < mid)	 //��ʯͷ�����С��mid��mid������̾��룬�����㣬���߸�ʯͷ 
			cnt++;
		else	//���ϣ�����ȥ 
			now = i;
	}
	if(cnt <= m) 
		return 1;	//���ߵ�ʯͷ����С�� M�����ܱ�֤��������ʣ�µ�ʯͷ�����ڵ�����̾���mid��������M�������ܱ�֤ 
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> len >> n >> m;
	for(int i = 0; i <= n; ++i)
		cin >> a[i];
	a[0] = 0;
	a[n + 1] = len;
	
	if(n == 0) {
		cout << 0;
		return 0;
	}
	int l = 0, r = len;
	while(l < r) {
		int mid = l + r + 1 >> 1;
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}
