#include<bits/stdc++.h>
using namespace std;
// ������Լɪ��
int a[105];
int main() {
	int i=0;	// ��λ�� 
	int k=0;	// ���� 
	int count;	// ͳ������
	int n, m;	// n���� ����m 
	cin>>n>>m;
	while(count != n) {
		i++;
		if(i > n)
			i = 1;
		if(a[i] == 0) {
			k++;
			if(k == m) {
				cout<<i<<" ";
				k = 0;	// ��գ����´�1��ʼ���� 
				count++;
				a[i] = 1;
			}
		}
	}
	return 0;
}
