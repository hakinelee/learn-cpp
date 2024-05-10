#include<bits/stdc++.h> 
using namespace std;

int na[1005], nb[1005];
string sub(string a, string b) {
	if(a == b) {
		return "0";
	}
	bool neg = 0;
	if(a.size() < b.size() || a.size() == b.size() && a < b) {
		swap(a ,b);
		neg = 1;
	}
	int lena = a.size(), lenb = b.size();
	for(int i = 0; i < lena; i++)
		na[lena-1-i] = a[i] - '0';
	for(int i = 0; i < lenb; i++)
		nb[lenb-1-i] = b[i] - '0';
	int lmax = lena;
	for(int i = 0; i < lmax; i++) {
		na[i] = na[i] - nb[i];
		if(na[i] < 0) {
			na[i] += 10;
			na[i+1]--; 
		}
	}
	while(na[lmax] == 0 && lmax > 0) {
		lmax--;
	}
	lmax++;
	string ans;
	for(int i = lmax - 1; i >= 0; i--) {
		ans += na[i] + '0';
	}
	if(neg) {
		ans = '-' + ans;
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
