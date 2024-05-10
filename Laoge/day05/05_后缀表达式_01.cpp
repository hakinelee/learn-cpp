#include<bits/stdc++.h> 
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	cin >> str;
	stack<int> s;
	int i = 0;
	int temp = 0;
	for(int i = 0; i < str.size(); ++i) {
		if(str[i] == '@')
			break;
		if(str[i] <= '9' && str[i] >= '0') {
			temp = temp * 10 + (str[i] - '0');
			continue;
		}
		if(str[i] == '.') {
			s.push(temp);
			temp = 0;
			continue;
		}
		int y = s.top();
		s.pop();
		int x = s.top();
		s.pop();
		
		switch(str[i]) {
			case '+':
				s.push(x + y);
				break;
			case '-':
				s.push(x - y);
				break;
			case '*':
				s.push(x * y);
				break;
			case '/':
				s.push(x / y);
				break;
			case '%':
				s.push(x % y);
				break;
		}
			
//		if(str[i] == '+') {
//			s.push(x + y);
//			continue;
//		}
//		if(str[i] == '-') {
//			s.push(x - y);
//			continue;
//		}
//		if(str[i] == '*') {
//			s.push(x * y);
//			continue;
//		}
//		if(str[i] == '/') {
//			s.push(x / y);
//			continue;
//		}
//		if(str[i] == '%') {
//			s.push(x % y);
//			continue;
//		}
	}
	cout << s.top();
//	while(!s.empty()) {
//		cout << s.top() << endl;
//		s.pop();
//	}
	return 0;
}
