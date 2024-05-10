#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t = 0;
	string s;
	stack<int> st;
	getline(cin, s);
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] <= '9' && s[i] >= '0') 
			t = t * 10 + s[i] - '0';
		else if(s[i] == '.') {
			st.push(t);
			t = 0;
		}
		else if(s[i] == '@') 
			break;
		else {
			int a1 = st.top();
			st.pop();
			int a2 = st.top();
			st.pop();
			if(s[i] == '+') 
				st.push(a1 + a2);
			if(s[i] == '-') 
				st.push(a2 - a1);
			if(s[i] == '*') 
				st.push(a1 * a2);
			if(s[i] == '/') 
				st.push(a2 / a1);
		}
	}
	cout << st.top();
	return 0;
}
