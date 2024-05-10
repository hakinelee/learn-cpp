#include<bits/stdc++.h>
using namespace std;

int f(int x) {
	if(x == 1 || x == 2)
		return 1;
	return f(x - 1) + f(x - 2);
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	while(n--) {
		int a;
		cin >> a;
		cout << f(a) << endl;
	}
	return 0;
}
