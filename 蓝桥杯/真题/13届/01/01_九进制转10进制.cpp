#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s = "2022" ;
	int ans = 0;
	for(int i = 0; i < s.size(); ++i) {
		int t = s[i] - '0';
		ans += t * pow(9, s.size() - i - 1);
	}
	cout << ans << endl;	// 1478
	return 0;
}
