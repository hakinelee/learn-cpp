#include<bits/stdc++.h> 
using namespace std;

int n, x, w;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	stack<int> s;
	stack<int> t;
	t.push(0);
	while(n--) {
		cin >> x;
		if(x == 0) {
			cin >> w;
			s.push(w);
			if(w >= t.top())
				t.push(w);
			continue;
		}
		if(x == 1) {
			if(s.empty())
				cout << 0 << endl;
			else {
				if(s.top() == t.top()) {
					s.pop();
					t.pop();
				}
				else
					s.pop();
			}
			continue;
		}
		if(x == 2) {
			if(s.empty())
				cout << 0 << endl;
			else
				cout << t.top() << endl;
			continue;
		}
	}
	return 0;
}
