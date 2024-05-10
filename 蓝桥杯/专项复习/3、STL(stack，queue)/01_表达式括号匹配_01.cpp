#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack<char> st;
	char c;
	while(cin >> c) {
		if(c == '@')
			break;
		if(c == '(')
			st.push(c);
		if(c == ')') {
			if(st.empty()){
				cout << "NO";
				return 0;
			}
			else
				st.pop();
		}
	}
	if(st.empty())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

