#include<bits/stdc++.h> 
using namespace std;
// ���P1271 �����9.��1��ѡ��ѧ����
const int N = 2e6 +9;
int a[N];	// ͳ�Ʊ�ų��ֵĴ��� 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin>>n>>m;
	for(int i = 1; i <= m; i++) {
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i = 1; i <= n; i++) {	// ���i 
		for(int j = 1; j <= a[i]; j++) {	// ����j 
			cout<<i<<" ";
		}
	}
	return 0;
}
