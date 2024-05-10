#include<bits/stdc++.h>
using namespace std;

int f(int n) {
	int ans;
	if(n == 1)
		ans = 2;
	else
		ans = f(n-1) * 2;
	return ans;
} 

int main() {
	int n;
	cin>>n; 
	cout<<f(n);
	return 0;
}
