#include<bits/stdc++.h>
using namespace std;
#define ll long long
// ��ͣ�ģ�⣩
int a[100005];

int main() {
	int n;	// ����
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
