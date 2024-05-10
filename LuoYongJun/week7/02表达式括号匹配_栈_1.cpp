#include<bits/stdc++.h>
using namespace std;

int main() {
	char x;
	stack<int> s;
	while(cin>>x) {
		if(x == '@')
			break;
		if(x == '(')
			s.push(x);
		if(x == ')') {
			if(s.empty()) {
				cout<<"NO";
				return 0;
			}
			else
				s.pop();
		}
	}
	if(s.empty())
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
} 
