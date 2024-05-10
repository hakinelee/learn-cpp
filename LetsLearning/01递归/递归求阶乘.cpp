#include<bits/stdc++.h>
using namespace std;

int f(int n) {
	int ans;
	if(n == 1)
		ans = 1;
	else
		ans = f(n-1) * n;
	return ans;
}

int main() {
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
