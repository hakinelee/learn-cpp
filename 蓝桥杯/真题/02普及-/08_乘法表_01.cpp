#include<bits/stdc++.h>
using namespace std;

char trans(int a, int p) {
    if(a % p < 10) 
		return a % p + '0';
    return a % p + 'A' - 10;
}

string to_p(int x, int p) {
	string s;
	for(int i = 0; x > 0; ++i) {
		s += trans(x, p);
		x /= p;
	}
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int p, ans = 0;
	cin >> p;
	for(int i = 1; i < p; ++i) {
		for(int j = 1; j <= i; ++j)
			cout << to_p(i, p) << "*" << to_p(j, p) << "=" << to_p(i * j, p) << " ";
		cout << endl;
	}
	return 0;
}
