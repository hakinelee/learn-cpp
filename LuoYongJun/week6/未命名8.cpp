#include<bits/stdc++.h>
using namespace std;
// 数组解决约瑟夫环
int a[105];
int main() {
	int i=0;	// 记位置 
	int k=0;	// 报数 
	int count;	// 统计人数
	int n, m;	// n个人 数到m 
	cin>>n>>m;
	while(count != n) {
		i++;
		if(i > n)
			i = 1;
		if(a[i] == 0) {
			k++;
			if(k == m) {
				cout<<i<<" ";
				k = 0;	// 清空，重新从1开始报数 
				count++;
				a[i] = 1;
			}
		}
	}
	return 0;
}
