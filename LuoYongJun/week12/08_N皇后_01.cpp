#include<bits/stdc++.h>
using namespace std;

int n,tot;            //n: ����;  tot:������
int ans[20];          //ans[x]:        ��x�лʺ���ڵڼ���
int vis[30];          //vis[y]=1:      ��y�з��˻ʺ�
int vis1[30];         //vis1[x+y]=1:   ���Խ��߷��˻ʺ�
int vis2[30];         //vis2[x-y+n]=1: ���Խ��߷��˻ʺ�
void dfs(int x) {      //��x�У�ö��������
    if(x == n + 1) {   //�Ѿ�����n��
        tot++;
        if(tot <= 3) {
            for(int i=1; i<=n; i++)  
				cout << ans[i] << " ";
            cout << endl;
        }
        return;
    }
    for(int y = 1; y <= n; y++) {     // ö�ٵ�x�е�����(x, y)
        if(vis[y])        // ��y���Ѿ��лʺ� 
        	continue;
        if(vis1[x+y])     // ���Խ����Ѿ��лʺ� 
        	continue;
        if(vis2[x-y+n])   // ���Խ����Ѿ��лʺ�
        	continue;
        ans[x] = y;
        vis[y] = 1;  vis1[x+y] = 1;  vis2[x-y+n] = 1; //�����ֳ�
        dfs(x + 1);                  //������һ��
        vis[y] = 0;  vis1[x+y] = 0;  vis2[x-y+n] = 0; //�ָ��ֳ�
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

