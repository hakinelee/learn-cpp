#include<bits/stdc++.h>
using namespace std;
// 循环队列解决约瑟夫环
//const int N = 1000;
//int que[N];
int que[105];
int head = 0;
int tail = -1;

int main() {
	int n, m;	// n个人 数到m 
	cin>>n>>m;
	for(int i = 1; i <= n; i++) 
		que[++tail] = i;	// 所有人全都入队 
	while((tail - head + 1) != 0) {
		for(int i = 1; i < m; i++) {	// 报数 
			que[++tail] = que[head];
			head++;
		}
		cout<<que[head]<<" ";
		head++;
	}
	return 0;
}
