#include<bits/stdc++.h>
using namespace std;

struct gold {
	double m;	 	// m ���� 
	double v;	 	// v �۸� 
	double p;	 	// p ��λ�۸� 
} a[105]; 

bool cmp(gold a, gold b) {	// �Ӵ�С���� 
	return a.p > b.p;
} 

int main() {
	int n, t;	 	// n�ѽ�� t�������� 
	double sum = 0; // �ܼ�ֵ 
	cin>>n>>t;	
	for(int i = 1; i <= n; i++) {	// ��n�д�ŵ�λ�۸� 
		cin>>a[i].m>>a[i].v;
		a[i].p = a[i].v / a[i].m;
	}
	sort(a+1, a+n+1, cmp);	// ��λ�۸�Ӵ�С��������
	for(int i = 1; i <= n; i++) {
		if(t >= a[i].m) {
			sum = sum + a[i].v;
			t = t - a[i].m;
		}
		else {
			sum = sum + t * a[i].p;
			break;
		}
	} 
	printf("%.2lf", sum);
	return 0;
}

