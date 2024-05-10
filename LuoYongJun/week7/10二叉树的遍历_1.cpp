#include <bits/stdc++.h>
using namespace std;
// 二叉树的遍历
const int N = 1e6 + 9;
struct Node {
	int v, ls, rs;
} t[N];
void print1(int u) {	// 前序 
	if(u) {
		cout<<t[u].v<<" ";
		print1(t[u].ls);
		print1(t[u].rs);
	}
}
void print2(int u) {	// 中序 
	if(u) {
		print2(t[u].ls);
		cout<<t[u].v<<" ";
		print2(t[u].rs);
	}
}
void print3(int u) {	// 后序 
	if(u) {
		print3(t[u].ls);
		print3(t[u].rs);
		cout<<t[u].v<<" ";
	}
}
int main() {
	int n;	// 节点数
	cin>>n;
	for(int i = 1; i <= n; i++) {
		t[i].v = i;
		cin>>t[i].ls>>t[i].rs;
	}
	int root = 1;
	print1(root);
	cout<<endl;
	print2(root);
	cout<<endl;
	print3(root);
	return 0;
}
