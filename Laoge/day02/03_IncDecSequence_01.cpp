#include<bits/stdc++.h> 
using namespace std;

const int N = 1e5 + 10;
int a[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	for(int i = n; i >= 1; --i)
		a[i] = a[i] - a[i - 1];
	// 从第2项到第n项中，正数绝对值之和 sum1 , 负数绝对值之和sum2 
	long long sum1 = 0, sum2 = 0;	
	for(int i = 2; i <= n; ++i)
		if(a[i] > 0)
			sum1 += a[i];
		else
			sum2 -= a[i];
	// 最少操作次数：max{ 正数绝对值之和 , 负数绝对值之和 } 
	// 最终数列种数：abs{ 正数绝对值之和 - 负数绝对值之和 } + 1
	cout << max(sum1, sum2) << endl;
	cout << abs(sum1 - sum2) + 1 << endl;
	return 0;
}
