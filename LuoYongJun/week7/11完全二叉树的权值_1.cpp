#include <bits/stdc++.h>
using namespace std;
int n, a, sum, ans, dep = 1, Max = -1e9;
int main() {
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a;
		sum += a;
		if(i == (1 << dep)-1) { // ����ĩβ�ڵ�(2^dep - 1)���л�����һ��
			if(sum > Max) {		// �ҵ����н�
				Max = sum;
				ans = dep;
			}
			dep++;
			sum = 0;
		}
	}
	if(sum > Max) {		// ����Ҷ�ӽڵ㣬���һ����ȱʧ����� 
		Max = sum;
		ans = dep;
	}
	cout<<ans;
	return 0;
}
