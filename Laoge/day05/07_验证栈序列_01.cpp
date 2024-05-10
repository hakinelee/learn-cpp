#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int q, n, a[N], b[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> q;
	stack<int> s;
	while(q--) {
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = 1; i <= n; i++)
			cin >> b[i];
		int ind = 1;
		for(int i = 1; i <= n; i++) {
			s.push(a[i]);
			while(!s.empty() && s.top() == b[ind]) { // 符合验证的出栈数
				s.pop();	// 出栈
				ind++;		// 验证下一个
			}
		}
		if(s.empty())		// 按验证顺序全部出栈
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		while(!s.empty())	// 多组样例，清空栈
			s.pop();
	}
	return 0;
}
