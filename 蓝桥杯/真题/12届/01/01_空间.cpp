#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// 1MB == 1024KB
	// 1KB == 1024byte
	// 1×Ö½Úbyte == 8Î»bit 
	// 256 MB = 256 * 1024 KB = 256 * 1024 * 1024 byte
	cout << (ll)256 * 1024 * 1024 * 8 / 32 << endl;
	return 0;
}
