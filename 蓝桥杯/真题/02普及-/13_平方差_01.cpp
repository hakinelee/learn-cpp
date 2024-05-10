#include<bits/stdc++.h>
using namespace std;

// 打表 + 数学 + 前缀和
// 打表：利用电脑模拟题目要求去找一些合法答案，绕后从中找出规律
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
// 从中发现
// 1. 所有的奇数可能都满足 
// 2. 4的倍数可能都满足 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
//	dabiao();
	int l, r, ans = 0;
	cin >> l >> r;
	// (r + 1) / 2	上取整
	//  r / 4 下取整 
	// y/x 上取整 等价于 (y+(x-1))/x 下取整 
	int sr = (r + 1) / 2 + r / 4;
	int sl = (l - 1 + 1) / 2 + (l - 1) / 4;
	ans = sr - sl;
	cout << ans << endl;
	return 0;
}
