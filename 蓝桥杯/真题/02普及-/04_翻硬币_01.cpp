#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int cnt = 0;
	for(int i = 0; i < s1.size(); ++i) {
		if(s1[i] != s2[i]) {
			cnt++;
			s1[i + 1] = (s1[i + 1] == '*' ? 'o' : '*');
		}	
	}
	cout << cnt;
	return 0;
}
