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
	// �ӵ�2���n���У���������ֵ֮�� sum1 , ��������ֵ֮��sum2 
	long long sum1 = 0, sum2 = 0;	
	for(int i = 2; i <= n; ++i)
		if(a[i] > 0)
			sum1 += a[i];
		else
			sum2 -= a[i];
	// ���ٲ���������max{ ��������ֵ֮�� , ��������ֵ֮�� } 
	// ��������������abs{ ��������ֵ֮�� - ��������ֵ֮�� } + 1
	cout << max(sum1, sum2) << endl;
	cout << abs(sum1 - sum2) + 1 << endl;
	return 0;
}
