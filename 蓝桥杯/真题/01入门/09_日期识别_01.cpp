#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s, t, d;
	string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	cin >> s;
	if(s[0] >= 'A' && s[0] <= 'Z') {
		t = s.substr(0, 3);
		for(int i = 0; i < 12; ++i) {
			if(t == month[i]) {
				cout << i + 1 << " ";
				break;
			}
		}
		if(s[3] != '0')
			cout << s[3];
		cout << s[4];
	}
	return 0;
}
