#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};  //四个方向
char g[100][100];
int n = 30, m = 60;
int dfs(int x, int y) {      	//当前位于坐标[x,y]
    if(g[x][y] == '0')  
		return 0;
    g[x][y] = '0';         		//把这个点从1改为0，后面不再搜它
    int ans = 1;           		//统计这个连通块的大小
    for(int i = 0; i < 4; ++i) {           //遍历它的4个邻接
        int nx = x + dx[i];		//一个邻居的坐标
		int ny = y + dy[i];   
        if(nx < 0 || ny < 0 || nx >= n || ny >= m)    //这个邻居是否在边界内
        	continue;
        ans += dfs(nx, ny);
    }
    return ans;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    for(int i = 0; i < n; ++i)  
		cin >> g[i];
    int ans = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(g[i][j] == '1')
                ans = max(ans, dfs(i, j));
    cout << ans;
    return 0;
}

