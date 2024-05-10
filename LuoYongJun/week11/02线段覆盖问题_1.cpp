#include<bits/stdc++.h>
using namespace std;

struct data {
	int a, b;	// ��ʼʱ�� a, ����ʱ�� b
} m[1000005];

bool cmp(data x, data y) {
	return x.b < y.b;		// ����ʱ���С�������� 
}

int main() {
	int n;
	int sum = 0; 
	int lastend = -1;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>m[i].a>>m[i].b;
	}
	sort(m+1, m+n+1, cmp);
	for(int i = 1; i <= n; i++) {
		if(m[i].a >= lastend) {
			sum++;
			lastend = m[i].b;
		}
	}
	cout<<sum;
	return 0;
}
