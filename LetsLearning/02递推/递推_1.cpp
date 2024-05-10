#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a[110];
	int n;
	cin>>n;
	int ans;
	a[1] = 1;
	for(int i = 2; i <= n; i++) {
		a[i] = a[i-1] + n;
	}
	for(int i = 1; i <= n; i++)
		ans += a[i]
	cout<<ans;
	return 0;
} 
