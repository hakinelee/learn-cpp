#include<bits/stdc++.h>
using namespace std;

// ��� + ��ѧ + ǰ׺��
// ������õ���ģ����ĿҪ��ȥ��һЩ�Ϸ��𰸣��ƺ�����ҳ�����
void dabiao() {
	bool vis[110] = {0};
	for(int x = 1; x <= 100; x++) {
		for(int y = 0; y <= 100; y++) {
			for(int z = 0; z <= 100; z++) {
				if(x == (y * y - z * z)) {
					if(!vis[x]) {
						cout << x << endl;
						vis[x] = 1;
					}
						
				}
			}
		}
	}
} 
// ���з���
// 1. ���е��������ܶ����� 
// 2. 4�ı������ܶ����� 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
//	dabiao();
	int l, r, ans = 0;
	cin >> l >> r;
	// (r + 1) / 2	��ȡ��
	//  r / 4 ��ȡ�� 
	// y/x ��ȡ�� �ȼ��� (y+(x-1))/x ��ȡ�� 
	int sr = (r + 1) / 2 + r / 4;
	int sl = (l - 1 + 1) / 2 + (l - 1) / 4;
	ans = sr - sl;
	cout << ans << endl;
	return 0;
}
