#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		string s = to_string(i);
		if(s.find("2", 0) != -1)
			sum += i;
		else if(s.find("0", 0) != -1)
			sum += i;
		else if(s.find("1", 0) != -1)
			sum += i;
		else if(s.find("9", 0) != -1)
			sum += i;
	}
	cout << sum;
	return 0;
}
