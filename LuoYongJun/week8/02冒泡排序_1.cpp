#include<bits/stdc++.h> 
using namespace std;
// 冒泡排序
int a[100005], n;
void bubble_sort() {
	for(int i = 0; i < n-1; i++) {
		bool swapped = false;   // 优化，如果某次比较没有发生交换，说明已经有序，结束
		for(int j = i+1; j < n-1; j++) {
			
		}
	}
}
int main() {
	cin>>n;
    for(int i = 0; i < n; i++)
    	cin>>a[i];
    bubble_sort();
    for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	return 0;
}
