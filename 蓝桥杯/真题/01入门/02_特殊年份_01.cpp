#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;	
	int ans = 0;
	for(int i = 1; i <= 5; ++i) {
		cin >> s;
		if(s[0] == s[2] && s[3] - s[1] == 1)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
