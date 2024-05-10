#include<bits/stdc++.h> 
using namespace std;

int na[1005], nb[1005], nc[1000005];
string sub(string a, string b) {
	string ans;
	int lena = a.size(), lenb = b.size(), i, by = 1;
//	for(int i = 0; i < lena; i++)
//		na[lena-i] = a[i] - '0';
//	for(int i = 0; i < lenb; i++)
//		nb[lenb-i] = b[i] - '0';
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(i = 0; i < lenb; i++) {
		int t = a[i] - b[i] + 9 + by;
		
	}
	
	
	
	for(int i = 1; i <= lena; i++) {
		for(int j = 1; j <= lenb; j++) {
			nc[i+j-1] += na[i] * nb[j];
		}
	}
	
	for(int i = 1; i <= lena + lenb; i++) {
		nc[i+1] += nc[i] / 10;
		nc[i] %= 10;
	}
	
	string ans;
	if(nc[lena+lenb])  
		ans += nc[lena+lenb] + '0';
	for(int i = lena+lenb - 1; i >= 1; i--) {
		ans += nc[i] + '0';
	}
	return ans;
}

int main() {
	string a, b;
	cin>>a;
	cin>>b;
	cout<<sub(a, b);
	return 0;
}
