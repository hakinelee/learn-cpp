#include<bits/stdc++.h>
using namespace std;
/**
 * 程序出错 
 */ 
const int N = 5e5 + 10;
int n, k, a[N], temp;
bool me[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		me[i] = true;
	}
	while(k--) {
		int t = 0x3f3f3f, pos = 0;
		for(int i = 1; i < n; ++i) {
			if(t > a[i] && me[i])  {
				t = a[i];
				pos = i;
			}
		}
		me[pos] = false;// 标记删除 
		temp = pos + 1; 
		while(temp <= n && !me[temp]) { // 跳过连续的已删除元素  
            temp++;  
        }  
        if(temp <= n) // 确保没超出数组边界  
            a[temp] += t;  
		temp = pos - 1;
 		while(temp > 0 && !me[temp]) { // 跳过连续的已删除元素  
            temp--;  
        }  
        if(temp > 0) // 确保没超出数组边界  
            a[temp] += t;  
	}
	for(int i = 1; i <= n; ++i) {
		if(me[i])
			cout << a[i] << " ";
	}
	return 0;
}
