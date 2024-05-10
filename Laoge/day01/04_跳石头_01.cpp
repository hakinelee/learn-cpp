#include<bits/stdc++.h>
using namespace std;

const int N = 5E4 + 10;
int a[N];
int len, m, n;

bool check(int d) {	// ������d�Ƿ���� 
	int num = 0;	// ����ʯͷ���� 
	int pos = 0;	// ��ǰվ����ʯͷ 
	for(int i = 1; i <= n; i++) {
		if(a[i] - pos < d) // ���԰���
			num++;
		else
			pos = a[i];	   // �����԰��� 
	}
	if(num <= m)
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> len >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	int l = 0;
	int r = len;
		
	while(l < r) {
		int mid = l + (r - l) / 2;
		if(check(mid))
			l = mid + 1;
		else
			r = mid - 1;
	}
	if(check(l) == 0)
		l -= 1;
	cout << l;
	return 0;
}
