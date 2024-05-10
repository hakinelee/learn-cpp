#include<bits/stdc++.h> 
using namespace std;

int a[105];

bool check(int x, int mid) {
	return x <= a[mid];
}

int bin_search(int n, int x) {
	int l = 1, r = n;
	while(l<r) {
		int mid = (l+r)/2;
		if(check(x, mid))
			r = mid;
		else
			l = mid+1;
	}
	return a[l];
}

int main() {
	int n = 100;
    for(int i=1; i<=n; i++) 
		a[i]=i;      //赋值，数字1~100
    int x = 68;                        //猜68这个数
    cout<<"x="<<bin_search(n,x);
	return 0;
}
