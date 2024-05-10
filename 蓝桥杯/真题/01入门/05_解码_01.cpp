#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] <= '9' && s[i] >= '0') {
			int j = s[i] - '0';
			while(j > 1) {
				cout << s[i - 1];
				j--;
			}
		}
		else
			cout << s[i];
	}
	return 0;
}

