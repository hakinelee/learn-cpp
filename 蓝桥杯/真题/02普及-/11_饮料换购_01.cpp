#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, cnt = 0;
	cin >> n;
	while(n >= 3) {
		n = n - 3;	//����3ƿ
		cnt += 3;	// ��3ƿ 
		n++;	//��1ƿ 
	}
	cnt += n;
	cout << cnt << endl; 
	return 0;
}
