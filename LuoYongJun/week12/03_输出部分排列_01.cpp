#include<bits/stdc++.h> 
using namespace std;
//输出部分排列
int n,m;
bool vis[10];
int a[10];
int b[10];

void dfs(int step) {
	if(step == m+1) {
        for(int i=1; i <= m; i++) {
		    cout<<"    "<<b[i];
        }
        cout<<endl;
        return;
	}
    for(int i=1; i<= n;i++) {
        if(vis[i] == 0) {
            vis[i] = 1;
            b[step] = i;
            dfs(step+1);
            vis[i] = 0;
        }
    }
	return;
}

int main() {
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
	dfs(1);
	return 0;
}
