#include<bits/stdc++.h>
using namespace std;

const int N = 2010;
char mp[N][N];	// ��ͼ
int used[N][N];	// ����Ƿ��ѹ� 
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};  // �ĸ�����
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}; 	 // �ĸ�����
int flag;		// ���ڱ��������Ƿ���ȫ����û 

void dfs(int x, int y) {      	//��ǰλ������[x,y]
	used[x][y] = 1;             //������'#'���ѹ���ע��Ϊʲô��������
    if(mp[x][y+1] == '#' && mp[x][y-1] == '#' && 
	   mp[x+1][y] == '#' && mp[x-1][y] == '#')
    	flag = 1;             //�������Ҷ���½�أ�����һ���ߵأ�������û
    for(int i = 0; i < 4; i++) {     //����DFS��Χ��½��
        int nx = x + d[i][0], ny = y + d[i][1];
        if(used[nx][ny]==0 && mp[nx][ny]=='#')    //ע��ΪʲôҪ�ж�vis[][]                
            dfs(nx,ny);             //����DFSδ�ѹ���½�أ�Ŀ���Ǳ������
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
    
    for(int i = 0; i < n; ++i)	// DFS�������ص� 
        for(int j = 0; j < n; ++j)
            if(mp[i][j] == '#' && used[i][j] == 0) {
				flag = 0;		// ������ȫ����û 
                dfs(i, j);		// �����������û�иߵأ������,��flag=1
                if(flag == 0) 	// �����ȷʵ�����ˣ�ͳ�Ʊ���û��������     
                	ans++;
        	}
    cout << ans;
    return 0;
}

