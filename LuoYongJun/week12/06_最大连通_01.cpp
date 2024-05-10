#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};  //�ĸ�����
char g[100][100];
int n = 30, m = 60;
int dfs(int x, int y) {      	//��ǰλ������[x,y]
    if(g[x][y] == '0')  
		return 0;
    g[x][y] = '0';         		//��������1��Ϊ0�����治������
    int ans = 1;           		//ͳ�������ͨ��Ĵ�С
    for(int i = 0; i < 4; ++i) {           //��������4���ڽ�
        int nx = x + dx[i];		//һ���ھӵ�����
		int ny = y + dy[i];   
        if(nx < 0 || ny < 0 || nx >= n || ny >= m)    //����ھ��Ƿ��ڱ߽���
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

