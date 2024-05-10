#include<bits/stdc++.h>
using namespace std;
#define ll long long
// 求和（模拟）
int a[100005];

int main() {
	int n;	// 个数
	cin>>n;
	for(int i = 1; i <= n; i++)
		cin>>a[i];
	int ans = 0;
	for(int i = 1; i <= n; i++)
		for(int j = i + 1; j <= n; j++)
			ans = ans + a[i] * a[j];
	cout<<ans;
	return 0;
}
