#include<bits/stdc++.h> 
using namespace std;

const int N = 10000;	// ��������
int que[N];		// ����
int head = 0;	// ��ͷ 
int tail = -1; 	// ��β 

int main() {
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		que[++tail] = i;
		// que[tail] = i;
		// tail++; 
	}
	while((tail - head + 1) != 0) {		// �����˶����� 
		for(int i=1; i<m; i++) {
			que[++tail] = que[head];
			// tail++;
			// que[tail] = que[head];
			head++;
		} 
		cout<<que[head]<<" ";
		head++;
	}
	cout<<endl;
	return 0;
}
