#include<bits/stdc++.h> 
using namespace std;

#define ll long long
const int N = 2e5 + 10;
int n;
int a[N], sum[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for(int i = 1; i <= n; ++i)	{
		cin >> a[i];
		sum[i] = s[i - 1] + a[i];
	}
	
	return 0;
}
