#include <bits/stdc++.h>
using namespace std;
int n, a, sum, ans, dep = 1, Max = -1e9;
int main() {
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a;
		sum += a;
		if(i == (1 << dep)-1) { // 若是末尾节点(2^dep - 1)，切换到下一层
			if(sum > Max) {		// 找到可行解
				Max = sum;
				ans = dep;
			}
			dep++;
			sum = 0;
		}
	}
	if(sum > Max) {		// 特判叶子节点，最后一层有缺失的情况 
		Max = sum;
		ans = dep;
	}
	cout<<ans;
	return 0;
}
