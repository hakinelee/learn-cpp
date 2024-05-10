#include<bits/stdc++.h>
using namespace std;

struct gold {
	double m;	 	// m 重量 
	double v;	 	// v 价格 
	double p;	 	// p 单位价格 
} a[105]; 

bool cmp(gold a, gold b) {	// 从大到小排序 
	return a.p > b.p;
} 

int main() {
	int n, t;	 	// n堆金币 t背包承重 
	double sum = 0; // 总价值 
	cin>>n>>t;	
	for(int i = 1; i <= n; i++) {	// 在n中存放单位价格 
		cin>>a[i].m>>a[i].v;
		a[i].p = a[i].v / a[i].m;
	}
	sort(a+1, a+n+1, cmp);	// 单位价格从大到小进行排序
	for(int i = 1; i <= n; i++) {
		if(t >= a[i].m) {
			sum = sum + a[i].v;
			t = t - a[i].m;
		}
		else {
			sum = sum + t * a[i].p;
			break;
		}
	} 
	printf("%.2lf", sum);
	return 0;
}

