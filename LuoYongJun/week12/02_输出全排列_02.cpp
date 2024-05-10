#include<bits/stdc++.h>
using namespace std;
int n;
bool vis[10];  // 记录是否处理 
int a[10];	   // 需要排列的数据
int b[10];     // 记录排列后的数据
void dfs(int step) {
	if(step == n+1) { // 已经对n个数做了全排列，输出全排列
		for(int i = 1; i <= n; i++) {
			cout<<"    "<<b[i];
		}
		cout<<endl;
		return;       // 结束，不再继续DFS
	}
	for(int i = 1; i <= n; i++) {	// 下一个将选择的数 i
		if(vis[i] == 0) {
			vis[i] = 1;	  // 进行标记，后面不能用 
			b[step] = i;
			dfs(step+1);
			vis[i] = 0;
		}
	}
	return ;
} 

int main() {
	cin>>n;
	for(int i = 1; i <= n; i++) {
		a[i] = i;	// 初始化数据 
	}
	dfs(1);
	return 0;
}
