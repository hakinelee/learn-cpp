#include<bits/stdc++.h> 
using namespace std;
// Âå¹ÈP1177 ¡¾Ä£°å¡¿ÅÅÐò
int main() {
	int n;
	cin>>n;
	vector<int> a(n, 0);
	for(int i = 0; i < n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++) {
		if(i == n - 1) {
			cout<<a[i]<<endl;
			break;
		}
		cout<<a[i]<<" ";
	}
	return 0;
}
