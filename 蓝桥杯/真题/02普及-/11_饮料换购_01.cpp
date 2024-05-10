#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, cnt = 0;
	cin >> n;
	while(n >= 3) {
		n = n - 3;	//ÏûºÄ3Æ¿
		cnt += 3;	// ºÈ3Æ¿ 
		n++;	//»»1Æ¿ 
	}
	cnt += n;
	cout << cnt << endl; 
	return 0;
}
