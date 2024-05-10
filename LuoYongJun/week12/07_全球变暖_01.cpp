#include<bits/stdc++.h>
using namespace std;

const int N = 2010;
char mp[N][N];	// 地图
int used[N][N];	// 标记是否搜过 
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};  // 四个方向
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}; 	 // 四个方向
int flag;		// 用于标记这个岛是否完全被淹没 

void dfs(int x, int y) {      	//当前位于坐标[x,y]
	used[x][y] = 1;             //标记这个'#'被搜过。注意为什么放在这里
    if(mp[x][y+1] == '#' && mp[x][y-1] == '#' && 
	   mp[x+1][y] == '#' && mp[x-1][y] == '#')
    	flag = 1;             //上下左右都是陆地，这是一个高地，不会淹没
    for(int i = 0; i < 4; i++) {     //继续DFS周围的陆地
        int nx = x + d[i][0], ny = y + d[i][1];
        if(used[nx][ny]==0 && mp[nx][ny]=='#')    //注意为什么要判断vis[][]                
            dfs(nx,ny);             //继续DFS未搜过的陆地，目的是标记它们
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n; 
	cin >> n;
    for(int i = 0; i < n; ++i)  
		cin >> mp[i];

    int ans = 0;
    
    for(int i = 0; i < n; ++i)	// DFS所有像素点 
        for(int j = 0; j < n; ++j)
            if(mp[i][j] == '#' && used[i][j] == 0) {
				flag = 0;		// 假设完全被淹没 
                dfs(i, j);		// 找这个岛中有没有高地，如果有,置flag=1
                if(flag == 0) 	// 这个岛确实被淹了，统计被淹没岛的数量     
                	ans++;
        	}
    cout << ans;
    return 0;
}

