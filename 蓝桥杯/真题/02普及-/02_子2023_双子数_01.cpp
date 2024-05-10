#include<bits/stdc++.h>
using namespace std;

#define ll long long
//const int N = ;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
//	int len = 0;
//	for(int i = 1; i <= 2023; ++i) {
//		if(i < 10)
//			len++;
//		else if(i >= 10 && i <= 99)
//			len += 2;
//		else if(i >= 100 && i <= 999)
//			len += 3;
//		else	// 1000-2023
//			len += 4;
//	}
//	cout << len << endl;	
	int ans = 0;
	const int N = 1e5;
	int arr[N], pos = 1;
	for(int i = 1; i <= 2023; ++i) {
		if(i < 10) {
			arr[pos] = i;
			pos++;
		}
		if(i >= 10 && i <= 99) {
			int t1 = i/10;
			int t2 = i%10;
			arr[pos] = t1;
			pos++;
			arr[pos] = t2;
			pos++;
		}
		if(i >= 100 && i <= 999) {
			int t1 = i/100;
			int t2 = i/10%10;
			int t3 = i%10;
			arr[pos] = t1;
			pos++;
			arr[pos] = t2;
			pos++;
			arr[pos] = t3;
			pos++;
		}
		if(i >= 1000 && i <= 2023) {
			int t1 = i/1000;
			int t2 = i/100%10;
			int t3 = i/10%10;
			int t4 = i%10;
			arr[pos] = t1;
			pos++;
			arr[pos] = t2;
			pos++;
			arr[pos] = t3;
			pos++;
			arr[pos] = t4;
			pos++;
		}
	}
	return 0;
}
