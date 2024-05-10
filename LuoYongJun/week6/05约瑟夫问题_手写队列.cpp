#include<bits/stdc++.h>
using namespace std;

const int N = 10010;
int q[N];
int head = 0;
int tail = -1;

int main() {
	int n ,m;
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		q[++tail] = i;
	}
	while((tail - head + 1) != 0) {
		for(int i = 1; i < m; i++) {		// Ä£Äâ±¨Êý 
			q[++tail] = q[head];
			head++;
		}
		cout<<q[head]<<" ";
		head++;
	}
	cout<<endl;
	return 0;
}
