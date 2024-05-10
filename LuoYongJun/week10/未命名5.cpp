#include<bits/stdc++.h>
using namespace std;

int h[10001], w[10001];
const int N = 10010; 
int n, k;	// n���ɿ�����k��С���� 

bool check(int d) {	//��鹻������ 
	int num = 0;
	// �ӵ�һ���ɿ�����ʼ���
	for(int i = 0; i < n; i++)
		num = num + (h[i] / d) * (w[i] / d);
	if(num >= k)
		return true;
	else
		return false;
}

int main() {
	cin>>n>>k;
	for(int i = 0; i<n; i++) {
		cin>>h[i]>>w[i];
	}
//	int d = 1;		// �����α߳� 
//	while(1) {
//		if(check(d))
//			d++;	// �ӱ߳�Ϊ 1 ��ʼ��һ��һ���������� 
//		else
//			break;
//	}
//	cout<<d - 1;
	int l = 0, r = N;
	while(l < r) {
		int mid = (l + r) >> 1;
		if(check(mid))
			l = mid + 1;
		else
			r = mid;
	}
	cout<<l - 1;
	return 0;
}
