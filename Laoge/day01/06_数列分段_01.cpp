#include<iostream>
using namespace std;

#define ll long long
const int N = 1e5 + 10;
int a[N], n, m;
ll sum, maxa;

bool check(int mid) {
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i] / mid;
	}
	if(sum >= m) 	//总段数大于等于所需要的 
		return true; 
	return false;
} 

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
		if(a[i] > maxa) 
			maxa = a[i];  
	}
	
	if(sum < m) {	//先判断是否有解 
		cout << 0;
		return 0;
	} 
	
	int l = 1, r = maxa;
	while(l < r) { 	//模板2 
		int mid = l + r + 1 >> 1;
		if(check(mid)) 
			l = mid; 
		else 
			r = mid - 1;
	}
	cout << l;
	return 0;
}

