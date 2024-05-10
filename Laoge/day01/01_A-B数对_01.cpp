#include<bits/stdc++.h>  
using namespace std;  
#define ll long long  

const int m = 2E5 + 10;  
int n, c;  
int a[m];  
ll cnt;  
  
int bin_search(int x, bool flag) {  
    int l = 1, r = n;  
    while(l < r) {  
        int mid = flag ? (l + r) / 2 : (l + r + 1) / 2; 
		if(flag) {
			if(a[mid] >= x)  
	            r = mid;  
	        else
	            l = mid + 1;
		} 
        else {
        	if(a[mid] <= x) 
				l = mid;
			else 
				r = mid - 1;
		}
    }  
    if(a[l] != x)
		return -1;
	return l; 
}  
  
int main() {  
    cin >> n >> c;  
    for(int i = 1; i <= n; i++)  
        cin >> a[i];  
    sort(a + 1, a + n + 1);  
      
    for(int i = n; i > 0; i--) {  
        int b = a[i] - c; 
		if(b < 1)  
			continue;
        int x = bin_search(b, true);
		if(x == -1) 
			continue;  
        int y = bin_search(b, false);  
        cnt += y - x + 1;  
    }  
    cout << cnt;  
    return 0;  
}
