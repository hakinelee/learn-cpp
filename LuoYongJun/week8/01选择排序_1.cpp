#include<bits/stdc++.h> 
using namespace std;
// 选择排序 
int a[100005], n;
void selection_sort() {
	for(int i = 0; i < n-1; i++) {
		int m = i;   //m: 记录a[i]~a[n-1]的最小数所在位置
		for(int j = i+1; j < n; j++)     // 找 a[i]~a[n-1]的最小数
			if(a[m] > a[j])
				m = j;
		swap(a[i], a[m]);                // 交换
	}
}
int main() {
	cin>>n;
    for(int i = 0; i < n; i++)
    	cin>>a[i];
    selection_sort);
    for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	return 0;
}
