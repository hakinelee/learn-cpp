#include<bits/stdc++.h>
using namespace std;

int n,tot;            //n: 行数;  tot:方案数
int ans[20];          //ans[x]:        第x行皇后放在第几列
int vis[30];          //vis[y]=1:      第y列放了皇后
int vis1[30];         //vis1[x+y]=1:   主对角线放了皇后
int vis2[30];         //vis2[x-y+n]=1: 副对角线放了皇后
void dfs(int x) {      //第x行，枚举所有列
    if(x == n + 1) {   //已经放完n行
        tot++;
        if(tot <= 3) {
            for(int i=1; i<=n; i++)  
				cout << ans[i] << " ";
            cout << endl;
        }
        return;
    }
    for(int y = 1; y <= n; y++) {     // 枚举第x行的坐标(x, y)
        if(vis[y])        // 第y列已经有皇后 
        	continue;
        if(vis1[x+y])     // 主对角线已经有皇后 
        	continue;
        if(vis2[x-y+n])   // 副对角线已经有皇后
        	continue;
        ans[x] = y;
        vis[y] = 1;  vis1[x+y] = 1;  vis2[x-y+n] = 1; //保存现场
        dfs(x + 1);                  //继续下一行
        vis[y] = 0;  vis1[x+y] = 0;  vis2[x-y+n] = 0; //恢复现场
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    cin >> n;
    dfs(1);
    cout<<tot<<endl;
    return 0;
}

