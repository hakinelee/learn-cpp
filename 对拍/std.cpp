#include<bits/stdc++.h>
using namespace std;

// 100% ÕýÈ·´ð°¸

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int sum = 0;
	int a, b;
	cin >> a >> b;
	for(int i = 1; i <= a; i ++)
		sum++;
	for(int i = 1; i <= b; i ++)
		sum++;
	cout << sum << endl;
	return 0;
}
