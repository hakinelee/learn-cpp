#include<bits/stdc++.h>
using namespace std;
// P1044 [NOIP2003 普及组] 栈
// 太难太难，暂时放弃
// 等我学完动态规划再来 
int main() {
	int n;
	cin>>n;
	queue<int> a, b;
	stack<int> s;
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		a.push(i);
	}
	
	s.push(a.front());
	a.pop();
	
	
	return 0;
}
