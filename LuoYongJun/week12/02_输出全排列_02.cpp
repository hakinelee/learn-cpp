#include<bits/stdc++.h>
using namespace std;
int n;
bool vis[10];  // ��¼�Ƿ��� 
int a[10];	   // ��Ҫ���е�����
int b[10];     // ��¼���к������
void dfs(int step) {
	if(step == n+1) { // �Ѿ���n��������ȫ���У����ȫ����
		for(int i = 1; i <= n; i++) {
			cout<<"    "<<b[i];
		}
		cout<<endl;
		return;       // ���������ټ���DFS
	}
	for(int i = 1; i <= n; i++) {	// ��һ����ѡ����� i
		if(vis[i] == 0) {
			vis[i] = 1;	  // ���б�ǣ����治���� 
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
		a[i] = i;	// ��ʼ������ 
	}
	dfs(1);
	return 0;
}
