#include<bits/stdc++.h> 
using namespace std;
// 洛谷P1271 【深基9.例1】选举学生会
const int N = 2e6 +9;
int a[N];	// 统计编号出现的次数 

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
	for(int i = 1; i <= n; i++) {	// 编号i 
		for(int j = 1; j <= a[i]; j++) {	// 次数j 
			cout<<i<<" ";
		}
	}
	return 0;
}
