#include<bits/stdc++.h>
using namespace std;
// ѭ�����н��Լɪ��
//const int N = 1000;
//int que[N];
int que[105];
int head = 0;
int tail = -1;

int main() {
	int n, m;	// n���� ����m 
	cin>>n>>m;
	for(int i = 1; i <= n; i++) 
		que[++tail] = i;	// ������ȫ����� 
	while((tail - head + 1) != 0) {
		for(int i = 1; i < m; i++) {	// ���� 
			que[++tail] = que[head];
			head++;
		}
		cout<<que[head]<<" ";
		head++;
	}
	return 0;
}
