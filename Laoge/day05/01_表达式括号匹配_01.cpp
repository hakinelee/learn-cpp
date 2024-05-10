#include<bits/stdc++.h> 
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack<char> s;
	char c;
	while(cin >> c) {
		if(c == '@')
			break;
		if(c == '(')
			s.push(c);
		if(c == ')') {
			if(s.empty()){
				cout << "NO";
				return 0;
			}
			else
				s.pop();
		}
	}
	if(s.empty())
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
